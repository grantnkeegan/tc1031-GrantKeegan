#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
using namespace std;
#include "item.h"

class Videogame : public Item {
  protected: 
    string developer;
    string platform;
    bool multiplayer;
  public:
    // Constructor y Destructor:
    Videogame();
    ~Videogame();
    // Setters:
    void set_developer(string n_developer);
    void set_platform(string n_platform);
    void set_multiplayer(bool n_multiplayer);
    // Getters:
    string get_franchise();
    string get_platform();
    bool get_multiplayer();
    // Método virtual:
    void showData();
};

#endif