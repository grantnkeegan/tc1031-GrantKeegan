#include <iostream>
using namespace std;

#include "videogame.h"

Videogame::Videogame(){} // Constructor.
Videogame::~Videogame(){} // Destructor.

// Setters:
void Videogame::set_developer(string n_developer) {developer = n_developer;}
void Videogame::set_platform(string n_platform) {platform = n_platform;}
void Videogame::set_multiplayer(bool n_multiplayer) {multiplayer = n_multiplayer;}

// Getters:
string Videogame::get_franchise() {return franchise;}
string Videogame::get_platform() {return platform;}
bool Videogame::get_multiplayer() {return multiplayer;}

// Método virtual:
void Videogame::showData() {
  cout << "The catalogued item option is " << name << ", it is a " << type << ", its genre is " << genre << ", it came out on " << year << ", its length is " << length << " minutes, its current score is "<< score <<", it is developed by " << developer << ", it is released on "<< platform << ", and its multiplayer status is "<< multiplayer << "." << endl;
}