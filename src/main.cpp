#include <iostream>
#include <stdlib.h>

#include "teatro.h"
#include "teatro_db.h"
#include "teatro_search.h"

using namespace std;

int main(){
	
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

	TeatroDb teatro_db;
	cout<<"\n"<<"...Datos guardados..."<<endl;
	teatro_db.guardar_teatro(teatros,2);

  TeatroSearch ts;
  int idToSearch = 44;

  // Agrega el menu.
  // 1. Buscar por id
  // 2. Buscar por nombre
  // 3. Salir

  int opc,opc1;
  bool T = true;
  while(T){
    cout<<"\n..........................";
    cout<<"\n\t\tBienvenido\n";
    cout<<"..........................\n";
    cout<<"Porque opcion deseas buscar\n1. Busqueda por ID\n2. Busqueda por Nombre\n3. Salir\n La opcion seleccionada es: ";
    cin>>opc;
    switch(opc){
      case 1: 
        cout<<"Opcion 1\n";
        break;
      case 2:
        cout<<"Opcion 2\n";
        break;
      case 3:
        cout<<"\n..........................";
        cout<<"\n\tHasta la proxima..";
        cout<<"\n..........................\n\n";
        return -1;
      default:
        cout<<"Esa opcion no existe..\n";
    }   
    cout<<"Desea buscar otra vez?\n1. Si\n2. No\nOpcion: ";
    cin>>opc1;
    if(opc1 == 1){
      //system("clear");
      //cout<<"\033[2J\033[H";
      cout<<"\n\n";
    }else{
      cout<<"\n..........................";
      cout<<"\n\tHasta la proxima..";
      cout<<"\n..........................\n\n";
      T = false;
      return -1;
    }
  }


  int indexTeatro = ts.search_by_id(teatros, sizeArray, idToSearch);
  if (indexTeatro != -1) {
    cout << "Teatro encontrado en indice " << indexTeatro << endl;
    teatros[indexTeatro].print();
  } else {
    cout << "Teatro No encontrado" << endl;
  }

	return 0;
}

