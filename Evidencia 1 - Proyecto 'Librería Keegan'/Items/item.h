#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

// Item will be the generic template that all subsequent items
// like movies, series, games, etc. will inherit from.

class Item {
  public:
    string type; // What type is it (movie, series, book).
    string name; // Everything has a name.
    int year; // Release year.
    string genre; // Everything has a genre, some are specific.
    int length; // Length in minutes.
    string franchise; // Franchise item belongs to.
    int score; // Everything has my rating score of 0-100.
  public:
    // Constructor and Destructor:
    Item();
    ~Item();
    // Setters:
    void set_type(string n_type);
    void set_name(string n_name);
    void set_year(int n_year);
    void set_genre(string n_genre);
    void set_length(int n_length);
    void set_franchise(string n_franchise);
    void set_score(int n_score);
    // Getters:
    string get_type();
    string get_name();
    int get_year();
    string get_genre();
    int get_length();
    string get_franchise();
    int get_score();
    // Metodos:
    virtual void showData(); // Displays text with every attribute.
};

#endif