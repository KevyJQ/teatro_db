#include "teatro_servicio.h"
#include "teatro_search.h"
#include "teatro.h"

#include <iostream>

using namespace std;

/*
1. Declar vector en teatro_servicio.h
2. Llenar el vector
3. Agregar en el menu, la opcion de imprimir todos los teatros.
*/


/**
 * Carga los teatros de un Archivo.
 */
void TeatroServicio::populateTeatros(){
  cout<< "..Llenado teatros.." << endl;
  cout<<"\nBuilding database"<<endl;

  char nombre1[NOMBRE_SIZE] = "Teatro Siqueiros";
	Teatro *ptrTeatro1 = new Teatro(20,nombre1);

  char nombre2[NOMBRE_SIZE] = "Teatro Aldama";
	Teatro *ptrTeatro2 = new Teatro(22,nombre2);
  
  char nombre3[NOMBRE_SIZE] = "Teatro Siqueiros";
	Teatro *ptrTeatro3 = new Teatro(23,nombre3);

  char nombre4[NOMBRE_SIZE] = "Teatro Aldama";
	Teatro *ptrTeatro4 = new Teatro(26,nombre4);

  this->teatros.push_back(*ptrTeatro1);
  this->teatros.push_back(*ptrTeatro2);
  this->teatros.push_back(*ptrTeatro3);
  this->teatros.push_back(*ptrTeatro4);// Referenciar mienbros de la clase
}

/**
 * Hace busqueda por ID.
 */
void TeatroServicio::buscarPorId(){
  cout<< "Busqueda por Id.." << endl;

  // Hacer TeatroSearch miembro de la clase teatro servicio.
  // Pedir el ID a buscar dentro de este metodo.
  int Id;
  cout<<"Que Id deseas buscar: ";
  cin>>Id;
  //TeatroSearch ts;
  int idToSearch = Id;
  int sizeArray = this->teatros.size();
  // Convertir un vector a un puntero a un arreglo.
  Teatro *teatrosPtr = this->teatros.data();//Hacemos la conversion

  int indexTeatro = ts.search_by_id(teatrosPtr, sizeArray, idToSearch);
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
  cout<< "..Busqueda por Nombre.."<< endl;
}

void TeatroServicio::mostrar_all_teatros(){
  cout<<"Todos los teatros.." << endl;

  //cout << "Usando vectores " << endl;
  //for (Teatro teatro : teatros)
        //teatro.print();
  for (int i = 0; i < this->teatros.size(); i++)
        this->teatros[i].print();
}

