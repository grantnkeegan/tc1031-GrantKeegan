#ifndef SOBRECARGA_H
#define SOBRECARGA_H

#include <iostream>
using namespace std;
#include <string>
#include "Items/item.h"

// Función de comparación para aplicar sorting a nuestros vectores.
bool compareByYear(const Item& a, const Item& b) {
  return a.year < b.year;
}

#endif