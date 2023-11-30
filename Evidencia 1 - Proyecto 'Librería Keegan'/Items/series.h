#ifndef SERIES_H
#define SERIES_H

#include <iostream>
using namespace std;
#include "item.h"

class Series : public Item {
  protected: 
    string showrunner;
    int seasons;
    int episodes;
  public:
    // Constructor and Destructor:
    Series();
    ~Series();
    // Setters:
    void set_showrunner(string n_showrunner);
    void set_seasons(int n_seasons);
    void set_episodes(int n_episodes);
    // Getters:
    string get_showrunner();
    int get_seasons();
    int get_episodes();
    // Virtual Method:
    void showData();
};

#endif