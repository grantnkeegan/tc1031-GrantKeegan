#include <iostream>
using namespace std;

#include "book.h"

Book::Book(){} // Constructor
Book::~Book(){} // Destructor

// Setters:
void Book::set_author(string n_author) {author = n_author;}
void Book::set_publisher(string n_publisher) {publisher = n_publisher;}
void Book::set_pages(int n_pages) {pages = n_pages;}

// Getters:
string Book::get_author() {return author;}
string Book::get_publisher() {return author;}
int Book::get_pages() {return pages;}

// Virtual Method:
void Book::showData() {
  cout << "The catalogued item option is " << name << ", it is a " << type << ", its genre is " << genre << ", it came out on " << year << ", its length is " << length << " minutes, its current score is "<< score <<", its author is " << author << ", its publisher is " << publisher << ", and it has " << pages << " pages." << endl;
}