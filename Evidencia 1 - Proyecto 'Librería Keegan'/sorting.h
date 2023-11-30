// Este archivo se encarga de guardar el algoritmo MERGE SORT que utilice.

#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include "Items/item.h"
#include "Items/movie.h"

template <class T> class Sorts {
  private:
    // Polymorphism sorting sub-algorithms:
    void mergeSplit(vector<T> &, vector<T> &, int, int); // Merge Sort.
    void mergeArray(vector<T> &, vector<T> &, int, int, int); // Merge Sort.
    void copyArray(vector<T> &, vector<T> &, int, int); // Merge Sort.
  public:
    void mergeSortR(vector<T>&);
};

/*=======================================
========== MERGE SORT ALGORITHM =========
=== Reused in the sorting algorithms. ===
=======================================*/

// Merge Sort Algorithm | By Reference.
template <class T>
void Sorts<T>::mergeSortR(vector<T> &source) {
  vector<T> tmp(source.size());
  mergeSplit(source, tmp, 0, source.size() -1);
}

// Merge Split | Splits vector in 2.
template <class T>
void Sorts<T>::mergeSplit(vector<T> &A, vector<T> &B, int low, int high) {
  if (high > low) {
    int mid = (low + high) / 2;
    mergeSplit(A, B, low, mid);
    mergeSplit(A, B, mid+1, high);
    mergeArray(A, B, low, mid, high);
  }
}

// Merge Array | Merges the split arrays.
template <class T>
void Sorts<T>::mergeArray(vector<T> &A, vector<T> &B, int low, int mid, int high) {
  int pos_1st_part = low;
  int end_1st_part = mid;
  int pos_2nd_part = mid + 1;
  int end_2nd_part = high;
  for (int i = pos_1st_part; i <= end_2nd_part; i++) {
    if ((A[pos_1st_part] < A[pos_2nd_part] && pos_1st_part <= end_1st_part) || pos_2nd_part > end_2nd_part) {
      B[i] = A[pos_1st_part];
      pos_1st_part++;
    } else {
      B[i] = A[pos_2nd_part];
      pos_2nd_part++;
    }
  }
  copyArray(A, B, low, high);
}

template <class T>
void Sorts<T>::copyArray(vector<T> &A, vector<T> &B, int low, int high) {
  for (int i = low; i <= high; i++) {
    A[i] = B[i];
  }
}

/*============
=== OTROS ====
============*/

// Algoritmo de comparación para Item.
bool comparebyYear(Item a, Item b) {
  return a.year < b.year;
}

#endif