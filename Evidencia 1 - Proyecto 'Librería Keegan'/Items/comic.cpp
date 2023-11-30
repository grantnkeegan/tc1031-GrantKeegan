#include <iostream>
using namespace std;

#include "comic.h"

Comic::Comic(){} // Constructor
Comic::~Comic(){} // Destructor

// Setters:
void Comic::set_illustrator(string n_illustrator) {illustrator = n_illustrator;}
void Comic::set_volume(int n_volume) {volume = n_volume;}
void Comic::set_series(string n_series) {series = n_series;}

// Getters:
string Comic::get_illustrator() {return illustrator;}
int Comic::get_volume() {return volume;}
string Comic::get_series() {return series;}

// Virtual Method:
void Comic::showData() {
  cout << "The catalogued item option is " << name << ", it is a " << type << ", its genre is " << genre << ", it came out on " << year << ", its length is " << length << " minutes, its current score is "<< score <<", its author is " << author << ", its publisher is " << publisher << ", it has " << pages << " pages, it is volume " << volume << " of the series " << series << ", and it is illustrated by " << illustrator << "." << endl;
}