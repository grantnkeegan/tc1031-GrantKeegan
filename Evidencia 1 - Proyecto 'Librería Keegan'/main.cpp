#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
#include <fstream> // Para entrada y salida de archivos.
// Archivos que se utilizaran.
#include "Items/item.h"
#include "Items/movie.h"
#include "sorting.h" // Repositorio del algoritmo sort utilizado.
#include "doublylinkedlist.h" // Incluye la estrucutra de datos de lista doblemente ligada.
#include "sobrecarga.h" // Incluye la función compareByYear para sortear atributos de objetos.
using namespace std;

int main() {

  /*=====================================
  === Primero, creamos las películas. ===
  =====================================*/
  
  /* En este proyecto, voy a importar los datos de las
  peliculas de pelis_entrada.txt, pero con el atributo
  de "year" con información incorrecta*/

  vector<Movie> movielist;
  
  Movie the_batman; Movie schindlers_list; Movie your_name;
  Movie titanic; Movie iron_man; Movie monsters_inc;

  /* Ahora, vamos a definir los atributos con el orden en el que vienen
  en el archivo de texto. | 8 atributos para 6 peliculas.*/

  fstream myFile;
  myFile.open("pelis_entrada.txt", ios::in);
  if (myFile.is_open()) {
    string line;
    // Movie 1. | The Batman.
    if (getline(myFile, line)) {the_batman.type = line;}
    if (getline(myFile, line)) {the_batman.name = line;}
    if (getline(myFile, line)) {the_batman.year = stoi(line);}
    if (getline(myFile, line)) {the_batman.genre = line;}
    if (getline(myFile, line)) {the_batman.length = stoi(line);}
    if (getline(myFile, line)) {the_batman.franchise = line;}
    if (getline(myFile, line)) {the_batman.score = stoi(line);}
    if (getline(myFile, line)) {the_batman.director = line;}
    // Movie 2. | Schindler's List.
    if (getline(myFile, line)) {schindlers_list.type = line;}
    if (getline(myFile, line)) {schindlers_list.name = line;}
    if (getline(myFile, line)) {schindlers_list.year = stoi(line);}
    if (getline(myFile, line)) {schindlers_list.genre = line;}
    if (getline(myFile, line)) {schindlers_list.length = stoi(line);}
    if (getline(myFile, line)) {schindlers_list.franchise = line;}
    if (getline(myFile, line)) {schindlers_list.score = stoi(line);}
    if (getline(myFile, line)) {schindlers_list.director = line;}
    // Movie 3. | Your Name.
    if (getline(myFile, line)) {your_name.type = line;}
    if (getline(myFile, line)) {your_name.name = line;}
    if (getline(myFile, line)) {your_name.year = stoi(line);}
    if (getline(myFile, line)) {your_name.genre = line;}
    if (getline(myFile, line)) {your_name.length = stoi(line);}
    if (getline(myFile, line)) {your_name.franchise = line;}
    if (getline(myFile, line)) {your_name.score = stoi(line);}
    if (getline(myFile, line)) {your_name.director = line;}
    // Movie 4. | Titanic.
    if (getline(myFile, line)) {titanic.type = line;}
    if (getline(myFile, line)) {titanic.name = line;}
    if (getline(myFile, line)) {titanic.year = stoi(line);}
    if (getline(myFile, line)) {titanic.genre = line;}
    if (getline(myFile, line)) {titanic.length = stoi(line);}
    if (getline(myFile, line)) {titanic.franchise = line;}
    if (getline(myFile, line)) {titanic.score = stoi(line);}
    if (getline(myFile, line)) {your_name.director = line;}
    // Movie 5. | Iron Man.
    if (getline(myFile, line)) {iron_man.type = line;}
    if (getline(myFile, line)) {iron_man.name = line;}
    if (getline(myFile, line)) {iron_man.year = stoi(line);}
    if (getline(myFile, line)) {iron_man.genre = line;}
    if (getline(myFile, line)) {iron_man.length = stoi(line);}
    if (getline(myFile, line)) {iron_man.franchise = line;}
    if (getline(myFile, line)) {iron_man.score = stoi(line);}
    if (getline(myFile, line)) {iron_man.director = line;}
    // Movie 6. | Monsters Inc.
    if (getline(myFile, line)) {monsters_inc.type = line;}
    if (getline(myFile, line)) {monsters_inc.name = line;}
    if (getline(myFile, line)) {monsters_inc.year = stoi(line);}
    if (getline(myFile, line)) {monsters_inc.genre = line;}
    if (getline(myFile, line)) {monsters_inc.length = stoi(line);}
    if (getline(myFile, line)) {monsters_inc.franchise = line;}
    if (getline(myFile, line)) {monsters_inc.score = stoi(line);}
    if (getline(myFile, line)) {monsters_inc.director = line;}
    myFile.close();
  } cout << endl << endl;

  // Confirmamos que se guardaron los datos en los objetos creados:
  the_batman.showData(); cout << endl; schindlers_list.showData(); cout << endl;
  your_name.showData(); cout << endl; titanic.showData(); cout << endl;
  iron_man.showData(); cout << endl; monsters_inc.showData(); cout << endl << endl;

  // Creando el vector para agregar las opciones:
  vector<Movie> myLibrary;
  myLibrary.push_back(the_batman);
  myLibrary.push_back(schindlers_list);
  myLibrary.push_back(your_name);
  myLibrary.push_back(titanic);
  myLibrary.push_back(iron_man);
  myLibrary.push_back(monsters_inc);

  // Corregimos los años de cada película:
  the_batman.set_year(2022); schindlers_list.set_year(1993); your_name.set_year(2016);
  titanic.set_year(1997); iron_man.set_year(2008); monsters_inc.set_year(2001);

  // Confirmamos que se corrigieron los datos en los objetos creados:
  cout << "==================================================" << endl << "= Catálogo de películas con los años corregidos: =" << endl << "==================================================" << endl << endl;
  the_batman.showData(); cout << endl; schindlers_list.showData(); cout << endl;
  your_name.showData(); cout << endl; titanic.showData(); cout << endl;
  iron_man.showData(); cout << endl; monsters_inc.showData(); cout << endl << endl;

  // Creamos nuevo vector con las películas corregidas:
  vector<Movie> correct_list;
  correct_list.push_back(the_batman);
  correct_list.push_back(schindlers_list);
  correct_list.push_back(your_name);
  correct_list.push_back(titanic);
  correct_list.push_back(iron_man);
  correct_list.push_back(monsters_inc);
  
  // Ahora, exportamos las películas con el año corregido al archivo "pelis_salida.txt":
  ofstream outFile;
  outFile.open("pelis_salida.txt", ios::in);
  if (outFile.is_open()) {
    for (Movie movie: correct_list) {
      outFile << "La opción catalogada es " << movie.get_name() << ", es una " << movie.get_type() << ", su género es " << movie.get_genre() << ", salió en el año " << movie.get_year() << ", su duración es de " << movie.get_length() << " minutos, su franquicia es " << movie.get_franchise() << ", su calificación es de "<< movie.get_score() <<", y su director es " << movie.get_director() << "." << endl << endl;
    }
    outFile.close();
  }

  /*=============================================
  ==  APLICACION DEL ALGORITMO DE ORDENAMIENTO ==
  =============================================*/

  // Haré un pequeño test para asegurarme de que mi algoritmo mergeSort funciona.

  // vector para items.
  cout << "Test de números para asegurarme de que mi Merge funciona." << endl;
  vector<int> numeros; // Creo un vector para guardar numeros fuera de orden.
  numeros.push_back(24);
  numeros.push_back(34);
  numeros.push_back(16);
  numeros.push_back(42);
  numeros.push_back(1);
  numeros.push_back(10);

  // Imprime la lista desordenada:
  cout << "The non-sorted array is : ";
  for (int num: numeros) {
    cout << num << " "; 
  }
  cout << endl;

  // Aplicamos Bubble Sort:
  Sorts<int> sorts;
  sorts.mergeSortR(numeros);

  // Imprime la lista ordenada:
  cout << "The sorted array is : ";
  for (int num: numeros) {
    cout << num << " "; 
  }
  cout << endl << "Funciona el Merge Sort!" << endl << endl;

  /*========================================
  == Ahora continuamos con las películas. ==
  ========================================*/

  // El siguiente código despliega la lista sin ordenar:
  cout << "La lista desordenada de películas es: ";
  cout << endl;
  for (const Item& item: correct_list) {
    cout << item.name << ": " << item.year << "." << endl;
  } cout << endl;

  //Aplicaré un algoritmo de ordenamiento para mostrar la lista ordenada.
  sort(correct_list.begin(), correct_list.end(), compareByYear); // Utilizando la funcion en sobrecarga.h

  // El siguiente códico despliega la lista ordenada:
  cout << "La lista ordenada y corregida de películas es: ";
  cout << endl;
  for (const Item& item: correct_list) {
    cout << item.name << ": " << item.year << "." << endl;
  } cout << endl;

  /*=================================
  === USO DE ESTRUCTURAS DE DATOS ===
  =================================*/

  // Utilizamos una lista doblemente ligada (en vez de un vector) para la segunda entrega del proyecto:
  DList<int> myLibraryLinked;
  myLibraryLinked.add(the_batman.year);
  myLibraryLinked.add(schindlers_list.year);
  myLibraryLinked.add(your_name.year);
  myLibraryLinked.add(titanic.year);
  myLibraryLinked.add(iron_man.year);
  myLibraryLinked.add(monsters_inc.year);

  //Imprimimos la lista de nuevo, pero ahora guardada en una lsita doblemente ligada:
  cout << "The year of every movie saved on a doubly linked list is: " << endl;
  string myLibraryLinkedString = myLibraryLinked.toString();
  cout << myLibraryLinkedString << endl;
  cout << "Funciona la lista doblemente ligada!" << endl << endl;

  // Consultamos la pelicula sacada en 2001 y la longitud de la lista.
  cout << "La pelicula de Monsters Inc. salió en: " << myLibraryLinked.get(5) << endl;
  cout << "La posición de Monsters Inc. en la lista doblemente ligada es: " << myLibraryLinked.indexOf(monsters_inc.year) << endl << endl;

  // Otras funciones para mi lista doblemente ligada:
  cout << "La lista doblemente ligada tiene una longitud de: " << myLibraryLinked.length() << endl;
  cout << "La lista está vacía? " << myLibraryLinked.empty() << endl;
  myLibraryLinked.clear();
  cout << "Borrar lista." << endl;
  cout << "La lista está vacía? " << myLibraryLinked.empty() << endl;
}