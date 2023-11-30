#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
using namespace std;
#include "item.h"

class Movie : public Item {
  public: 
    string director;
  public:
    // Constructor and Destructor:
    Movie();
    ~Movie();
    // Setters:
    void set_director(string n_director);
    // Getters:
    string get_director();
    // Virtual Method:
    void showData();
};

#endif