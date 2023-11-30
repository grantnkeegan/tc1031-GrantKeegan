// File for exception handling functions. throws text when an error occurs.
// Original code by Eduardo Juárez, my algorithms and data structures teacher.

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <iostream>
using namespace std;
#include <exception>
#include <string>
#include <cstdio> // Includes throw();

// throw() is included in cstudio and it is used for error handling.

class Exception : public exception {
  protected:
    string text;
  public:
    Exception() throw();
    ~Exception() throw();
    virtual const char* what() const throw();
};

Exception::Exception()throw():text("Basic exception"){} // Constructor.
Exception::~Exception()throw(){} // Destructor.

// 'what' virtual function. | 
const char* Exception::what() const throw() {
  return text.c_str();
}

// Range Error.
class RangeError : public Exception {
public:
  RangeError() throw();
};
RangeError::RangeError() throw () {
    text = string("RangeError");
}

// Out of Memory Error.
class OutOfMemory : public Exception {
public:
  OutOfMemory() throw();
};
OutOfMemory::OutOfMemory() throw () {
    text = std::string("OutOfMemory");
}

// IndexOutofBounds Error.
class IndexOutOfBounds : public Exception {
public:
  IndexOutOfBounds() throw();
};
IndexOutOfBounds::IndexOutOfBounds() throw () {
  text = string("IndexOutOfBounds");
}

// No Such Element Error.
class NoSuchElement : public Exception {
public:
  NoSuchElement() throw();
};
NoSuchElement::NoSuchElement() throw () {
    text = std::string("NoSuchElement");
}

// Illegal Action Error.
class IllegalAction : public Exception {
public:
  IllegalAction() throw();
};
IllegalAction::IllegalAction() throw () {
    text = std::string("IllegalAction");
}

// Overflow Error.
class Overflow : public Exception {
public:
  Overflow() throw();
};
Overflow::Overflow() throw () {
    text = std::string("Overflow");
}

#endif