#ifndef COMIC_H
#define COMIC_H

#include <iostream>
using namespace std;
#include "book.h"

class Comic : public Book {
  protected: 
    string illustrator;
    int volume;
    string series;
  public:
    // Constructor and Destructor:
    Comic();
    ~Comic();
    // Setters:
    void set_illustrator(string n_illustrator);
    void set_volume(int n_volume);
    void set_series(string n_series);
    // Getters:
    string get_illustrator();
    int get_volume();
    string get_series();
    // Virtual Method:
    void showData();
};

#endif