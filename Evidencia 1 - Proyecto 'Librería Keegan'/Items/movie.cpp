#include <iostream>
using namespace std;

#include "movie.h"

Movie::Movie(){} // Constructor
Movie::~Movie(){} // Destructor

// Setters:
void Movie::set_director(string n_director) {director = n_director;}

// Getters:
string Movie::get_director() {return director;}

// Virtual Method:
void Movie::showData() {
  cout << "The catalogued item option is " << name << ", it is a " << type << ", its genre is " << genre << ", it came out on " << year << ", its length is " << length << " minutes, its current score is "<< score <<", and its director is " << director << "." << endl;
}