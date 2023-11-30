// Repository for Doubly Linked List data structure.
// Original code by Eduardo Juárez, my algorithms and data structures teacher.

#ifndef DLIST_H_
#define DLIST_H_

#include <iostream>
using namespace std;

#include <string>
#include <sstream>
#include "exception.h"

template <class T> class DList;
template <class T> class DListIterator;

/*================================
=== CODE THAT CREATES THE NODE ===
================================*/

template <class T>
class DLink {
private:
  DLink(T);
  DLink(T, DLink<T>*, DLink<T>*);
  DLink(const DLink<T>&);

  T	    value;
  DLink<T> *previous;
  DLink<T> *next;

  friend class DList<T>;
  friend class DListIterator<T>;
};

template <class T>
DLink<T>::DLink(T val) : value(val), previous(0), next(0) {}

template <class T>
DLink<T>::DLink(T val, DLink *prev, DLink* nxt) : value(val), previous(prev), next(nxt) {}

template <class T>
DLink<T>::DLink(const DLink<T> &source) : value(source.value), previous(source.previous), next(source.next) {}

// CODE THAT CREATES THE LIST OF NODES WITH ITS FUNCTIONS:

template <class T>
class DList {
  public:
    DList(); // Constructor.
    DList(const DList<T>&);
    ~DList(); // Destructor.

    void addFirst(T);
    void add(T);
    T    getFirst() const ;
    T    removeFirst() ;
    T	 getLast() const ;
    T    removeLast() const;
    int  length() const;
    T    get(int) const;
    bool contains(T) const;
    bool empty() const;
    void clear();
    std::string toString() const;
    void operator= (const DList&);

    void addBefore(DListIterator<T>&, T);
    void addAfter(DListIterator<T>&, T);
    T    removeCurrent(DListIterator<T>&);

    bool set(int, T);
    int  indexOf(T) const;
    int  lastIndexOf(T) const;
    T    remove(int);
    bool removeFirstOcurrence(T);
    bool removeLastOcurrence(T);

  private:
    DLink<T> *head; // Pointer to the final (head) node of the linked list.
    DLink<T> *tail; // Pointer to the first (tail) node of the linked list.
    int 	 size; // Size of the list.

    friend class DListIterator<T>;
};

// Creates the nodes and sets values of the list:
template <class T>
DList<T>::DList() {
  size = 0;
  head = NULL;
  tail = NULL;
}

// Sets up the list (I guess):
template <class T>
DList<T>::DList(const DList<T> &source)  {
  DLink<T> *nodo_lista_original, *nodo_lista_nueva;
  if (source.empty()) {
    size = 0;
    head = NULL;
    tail = NULL;
  } else {
    nodo_lista_original = source.head;
    head = new DLink<T>(nodo_lista_original->value);
    if (head == 0) {
      throw OutOfMemory();
    }
    nodo_lista_nueva = head;

    nodo_lista_original = nodo_lista_original->next;
    while(nodo_lista_original != NULL) {
      nodo_lista_nueva->next = new DLink<T>(nodo_lista_original->value, nodo_lista_nueva, 0);
      if (nodo_lista_nueva->next == 0) {
        throw OutOfMemory();
      }
      nodo_lista_original = nodo_lista_original->next;
      nodo_lista_nueva = nodo_lista_nueva->next;
    }
    size = source.size;
  }
}

// Destructor for the list:
template <class T>
DList<T>::~DList() {
  clear();
}

// Creates the first node of the list.
template <class T>
void DList<T>::addFirst(T val)  {
  DLink<T> * nuevo_nodo = new DLink<T>(val);
  if(nuevo_nodo == NULL) {
    throw OutOfMemory();
  }
  if (empty()) {
    head = nuevo_nodo;
    tail = nuevo_nodo;
  } else {
    nuevo_nodo->next = head;
    head->previous = nuevo_nodo;
    head = nuevo_nodo;
  }
  size++;
}

// Adds a numeric value to the list.
template <class T>
void DList<T>::add(T val)  {
  if (empty()) {
    addFirst(val);
  } else {
    DLink<T> * nuevo_nodo = new DLink<T>(val);
    if(nuevo_nodo == NULL) {
      throw OutOfMemory();
    }
    nuevo_nodo->previous = tail;
    tail->next = nuevo_nodo;
    tail = nuevo_nodo;
    size++;
  }
}

// Gets the first element of the list.
template <class T>
T DList<T>::getFirst() const  {
  if (empty()) {
    throw NoSuchElement();
  }
  return head->value;
}

// Removes the first element of the list.
template <class T>
T DList<T>::removeFirst()  {
  if (empty()) {
    throw NoSuchElement();
  }
  DLink<T> * victima = head;
  T result = victima->value;

  if (head == tail) {
    head = NULL;
    tail = NULL;
  } else {
    head = victima->next;
    head->previous = NULL;
    victima->next = NULL;
  }
  delete victima;
  size--; 
  return result;
}

// Returns the size of the list.
template <class T>
int DList<T>::length() const {
  return size;
}

// Returns the value of the current node?
template <class T>
T DList<T>::get(int index) const {
  int pos;
  DLink<T> *nodo_actual;
  if (index < 0 || index >= size) {
    throw IndexOutOfBounds();
  }
  if (index == 0) {
    return getFirst();
  }
  nodo_actual = head;
  pos = 0;
  while (pos != index) {
    nodo_actual = nodo_actual->next;
    pos++;
  }
  return nodo_actual->value;
}

// Returns true or false for the number contained in the list.
template <class T>
bool DList<T>::contains(T val) const {
  DLink<T> *nodo_actual;
  nodo_actual = head;
  while (nodo_actual != NULL) {
    if (nodo_actual->value == val) {
      return true;
    }
    nodo_actual = nodo_actual->next;
  }
  return false;
}

// Returns true if the list is empty, false if there is an element.
template <class T>
bool DList<T>::empty() const {
  if (head == NULL && tail == NULL && size == 0) {
    return true;
  }
  return false;
}

// Erases every node in the list.
template <class T>
void DList<T>::clear() {
  DLink<T> *nodo_actual, *nodo_siguiente;
  nodo_actual = head;
  while (nodo_actual != NULL) {
    nodo_siguiente = nodo_actual->next;
    delete nodo_actual;
    nodo_actual = nodo_siguiente;
  }
  head = NULL;
  tail = NULL;
  size = 0;
}

// Converts the linked list to a string.
template <class T>
std::string DList<T>::toString() const {
  std::stringstream aux;
  DLink<T> *p;
  p = head;
  aux << "[";
  while (p != 0) {
    aux << p->value;
    if (p->next != 0) {
      aux << ", ";
    }
    p = p->next;
  }
  aux << "]";
  return aux.str();
}

// Overloads the operator "=":
template <class T>
void DList<T>::operator=(const DList<T> &source)  {
  DLink<T> *p, *q;
  clear();
  if (source.empty()) {
    size = 0;
    head = 0;
    tail = 0;
  } else {
    p = source.head;
    head = new DLink<T>(p->value);
    if (head == 0) {
      throw OutOfMemory();
    }
    q = head;

    p = p->next;
    while(p != 0) {
      q->next = new DLink<T>(p->value, q, 0);
      if (q->next == 0) {
        throw OutOfMemory();
      }
      p = p->next;
      q = q->next;
    }
    size = source.size;
  }
}

template <class T>
void DList<T>::addBefore(DListIterator<T> &itr, T val) {
}

template <class T>
void DList<T>::addAfter(DListIterator<T> &itr, T val) {
}

template <class T>
T DList<T>::removeCurrent(DListIterator<T> &itr) {
  T val;
  return val;
}

// Sets value:
template <class T>
bool DList<T>::set(int index, T val)  {
  int pos;
  DLink<T> *p;

  if (index < 0 || index >= size) {
    throw IndexOutOfBounds();
  }

  p = head;
  pos = 0;
  while (pos != index) {
    p = p->next;
    pos++;
  }

  p->value = val;
  return true;
}

// Returns the position in the list of the number introduced. | Similar to insertion().
template <class T>
int DList<T>::indexOf(T val) const {
  int index;
  DLink<T> *p;
  index = 0;
  p = head;
  while (p != 0) {
    if (p->value == val) {
      return index;
    }
    index++;
    p = p->next;
  }
  return -1;
}

template <class T>
int DList<T>::lastIndexOf(T val) const {
  return 0;
}

// Removes the link at the position you choose.
template <class T>
T DList<T>::remove(int index)  {
  int pos;
  T val;
  DLink<T> *p;
  if (index < 0 || index >= size) {
    throw IndexOutOfBounds();
  }
  if (index == 0) {
    return removeFirst();
  }
  p = head;
  pos = 0;
  while (pos != index) {
    p = p->next;
    pos++;
  }
  val = p->value;
  p->previous->next = p->next;
  if (p->next != 0) {
    p->next->previous = p->previous;
  }
  size--;
  delete p;
  return val;
}

template <class T>
bool DList<T>::removeFirstOcurrence(T val) {
  return false;
}

template <class T>
bool DList<T>::removeLastOcurrence(T val) {
  return false;
}

// DOUBLY LINKED LIST ITERATOR:

template <class T>
class DListIterator {
  public:
    DListIterator(DList<T>*);
    DListIterator(const DListIterator<T>&);
    bool begin();
    bool end();
    T&   operator() () ;
    bool operator++ ();
    void operator= (T) ;
  private:
    DLink<T> *current;
    DLink<T> *previous;
    DList<T> *theList;
    friend class DList<T>;
};

template <class T>
DListIterator<T>::DListIterator(DList<T> *aList) : theList(aList) {
  begin();
}

template <class T>
DListIterator<T>::DListIterator(const DListIterator<T> &source) : theList(source.theList) {
  begin();
}

template <class T>
bool DListIterator<T>::begin() {
  previous = 0;
  current = theList->head;
  return (current != 0);
}

template <class T>
T& DListIterator<T>::operator() ()  {
  if (current == 0) {
    throw NoSuchElement();
  }
  return current->value;
}

template <class T>
bool DListIterator<T>::end() {
  if (current == 0) {
    if (previous != 0) {
      current = previous->next;
    }
  }
  return (current == 0);
}

template <class T>
bool DListIterator<T>::operator++ () {
  if (current == 0) {
    if (previous == 0) {
      current = theList->head;
    } else {
      current = previous->next;
    }
  } else {
    previous = current;
    current = current->next;
  }
  return (current != 0);
}

template <class T>
void DListIterator<T>::operator= (T val)  {
  if (current == 0) {
    throw NoSuchElement();
  }
  current->value = val;
}

#endif