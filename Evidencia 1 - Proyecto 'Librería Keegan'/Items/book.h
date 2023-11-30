#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;
#include "item.h"

class Book : public Item {
  protected: 
    string author;
    string publisher;
    int pages;
  public:
    // Constructor and Destructor:
    Book();
    ~Book();
    // Setters:
    void set_author(string n_author);
    void set_publisher(string n_publisher);
    void set_pages(int n_pages);
    // Getters:
    string get_author();
    string get_publisher();
    int get_pages();
    // Virtual Method:
    void showData();
};

#endif