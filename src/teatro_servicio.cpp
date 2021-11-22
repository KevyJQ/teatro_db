#include "teatro_servicio.h"

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

	char nombre1[NOMBRE_SIZE] = "Teatro Insurgentes";
	Teatro teatro(1, nombre1);
	teatro.print();

	char nombre2[NOMBRE_SIZE] = "Teatro Valladolid";
	Teatro *ptrTeatro = new Teatro(5,nombre2);
	ptrTeatro->print();

	char nombre3[NOMBRE_SIZE] = "Teatro Siqueiros";
	Teatro *ptrTeatro3 = new Teatro(23,nombre3);
	ptrTeatro3->print();

  char nombre4[NOMBRE_SIZE] = "Teatro Aldama";
	Teatro *ptrTeatro4 = new Teatro(44,nombre4);
	ptrTeatro4->print();

  int sizeArray = 4;
	Teatro teatros[sizeArray] = {
    teatro, 
    *ptrTeatro, 
    *ptrTeatro3,
    *ptrTeatro4
  };
}

/**
 * Hace busqueda por ID.
 */
void TeatroServicio::buscarPorId(){
  cout<< "..Busqueda por Id.."<< endl;
}

/**
 * Hace busqueda por Nombre.
 */
void TeatroServicio::buscarPorNombre(){
  cout<< "..Busqueda por Nombre.."<< endl;
}


