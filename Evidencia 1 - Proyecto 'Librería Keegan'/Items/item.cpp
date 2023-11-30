#include <iostream>
using namespace std;

#include "item.h"

Item::Item(){} // Constructor.
Item::~Item(){} // Destructor.

// Setters:
void Item::set_type(string n_type) {type = n_type;}
void Item::set_name(string n_name) {name = n_name;}
void Item::set_year(int n_year) {year = n_year;}
void Item::set_genre(string n_genre) {genre = n_genre;}
void Item::set_length(int n_length) {length = n_length;}
void Item::set_franchise(string n_franchise) {franchise = n_franchise;}
void Item::set_score(int n_score) {score = n_score;}

// Getters:
string Item::get_type() {return type;}
string Item::get_name() {return name;}
int Item::get_year() {return year;}
string Item::get_genre() {return genre;}
int Item::get_length() {return length;}
string Item::get_franchise() {return franchise;}
int Item::get_score() {return score;}

void Item::showData() {
  cout << "The catalogued item option is " << name << ", it is a " << type << ", its genre is " << genre << ", it came out on " << year << ", its length is " << length << " minutes." << endl;
}