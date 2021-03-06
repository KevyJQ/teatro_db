#include "teatro_servicio.h"

#include <iostream>
#include <string.h>
#include "teatro_search.h"
#include "teatro.h"
#include "teatro_db.h"
#include "teatro_sort.h"
#include  <bits/stdc++.h>
#include <limits>

using namespace std;


/**
 * Carga los teatros de un Archivo.
 */
void TeatroServicio::populateTeatros(){
  // Usar teatro_db para popule the teatros.
  TeatroDb teatro_db;
  teatro_db.populate_teatros(&this->teatros);
  TeatroSort teatroSort;
  teatroSort.quick_sort(&this->teatros);
  for (int i = 0; i < this->teatros.size(); i++ ) {
    // map[p2] = &p2 
    this->mapTeatros[this->teatros[i]] = &this->teatros[i];   
  }
}

/**
 * Hace busqueda por ID.
 */
void TeatroServicio::buscarPorId(){
  cout<< "Busqueda por Id.." << endl;

  int Id;
  cout<<"Que Id deseas buscar: ";
  cin>>Id;
  int idToSearch = Id;
  int sizeArray = this->teatros.size();
  // Convertir un vector a un puntero a un arreglo.
  Teatro *teatrosPtr = this->teatros.data();//Hacemos la conversion

  int indexTeatro = this->ts.search_by_id(teatrosPtr, sizeArray, idToSearch);
  if (indexTeatro != -1) {
    cout << "Teatro encontrado en indice " << indexTeatro << endl;
    this->teatros[indexTeatro].print();
  } else {
    cout << "Teatro No encontrado" << endl;
  }
}

/**
 * Hace busqueda por Nombre.
 */
void TeatroServicio::buscarPorNombre(){  
  char name[NOMBRE_SIZE];
  cout<<"Que nombre de Teatro deseas buscar?: " << endl;
  
  cin.clear();
  cin.sync();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  while (!cin.getline (name, NOMBRE_SIZE)) {
    cout << "Nombre invalido" << endl;
  }
  
  Teatro searchTeatro(1, name);
  if (this->mapTeatros.count(searchTeatro) > 0) {
    cout << "Encontrado!!!!" << endl;
    Teatro* encontrado = this->mapTeatros[searchTeatro];
    encontrado->print();
  } else {
    cout << "No se encontro el teatro:" << name << endl;
  }
}

void TeatroServicio::mostrar_all_teatros(){
  cout<<"Todos los teatros.." << endl;

  //cout << "Usando vectores " << endl;
  //for (Teatro teatro : teatros)
        //teatro.print();
  for (int i = 0; i < this->teatros.size(); i++) {
        this->teatros[i].print();
  }
}



