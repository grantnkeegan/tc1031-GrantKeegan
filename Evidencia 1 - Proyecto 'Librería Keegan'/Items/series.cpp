#include <iostream>
using namespace std;

#include "series.h"

Series::Series(){} // Constructor
Series::~Series(){} // Destructor

// Setters:
void Series::set_showrunner(string n_showrunner) {showrunner = n_showrunner;}
void Series::set_seasons(int n_seasons) {seasons = n_seasons;}
void Series::set_episodes(int n_episodes) {seasons = n_episodes;}

// Getters:
string Series::get_showrunner() {return showrunner;}
int Series::get_seasons() {return seasons;}
int Series::get_episodes() {return episodes;}

// Virtual Method:
void Series::showData() {
  cout << "The catalogued item option is " << name << ", it is a " << type << ", its genre is " << genre << ", it came out on " << year << ", its length is " << length << " minutes, its current score is "<< score <<", its showrunner is " << showrunner << ", it has " << seasons << " seasons, with "<< episodes << " episodes in total." << endl;
}