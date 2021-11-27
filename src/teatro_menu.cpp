#include <iostream>
#include <stdlib.h>
#include "teatro_menu.h"

using namespace std;

/**
 * Regresa {@code true} si es valido, de otra manera {@code false}.
 */
bool TeatroMenu::validar_opcion(int opcion){
//   if(opcion >= 1 && option <= 3){
//     return true;  
//   }
//   return false;
  cout << "option " << opcion << endl;
  if(opcion > 0 || opcion <5){
    return opcion >= BUSQUEDA_POR_ID && opcion <= SALIR;
  }else{
    cout<<"Opcion erronea";
    return false;
  }
}

void TeatroMenu::mostrar_menu(){
  // Agrega el menu.
  // 1. Buscar por id
  // 2. Buscar por nombre
  // 3. Salir
    cout<<"\n..........................";
    cout<<"\n\t\tBienvenido\n";
    cout<<"..........................\n";
    cout<< "Porque opcion deseas buscar\n"
          "1. Busqueda por ID\n"
          "2. Busqueda por Nombre\n"
          "3. Mostrar todos los teatros\n"
          "4. Salir\n";
}

void TeatroMenu::procesar(){
  this->teatroServicio.populateTeatros();

  bool salir = false;
  int opcion;
  while(!salir){
    this->mostrar_menu();

    bool isValid = false;
    while (!isValid) {
      // TODO: validate invalid outputs
      cout << "Dame tu opcion: ";
      cin >> opcion;
      // clear buffer before taking
      // new line
      // cin.ignore(numeric_limits<streamsize>::max());
      isValid = this->validar_opcion(opcion);
      //cout << "isValid is " << isValid << endl;
    }

    switch (opcion) {
      case BUSQUEDA_POR_ID:
        // TODO pedir id
        this->teatroServicio.buscarPorId();
        break;
      case BUSQUEDA_POR_NOMBRE:
        this->teatroServicio.buscarPorNombre(); //Refereciar miembros de la clase
        break;
      case MOSTRAR_ALL_TEATROS:
        this->teatroServicio.mostrar_all_teatros();
        break;
      case SALIR:
        cout<<"\n..........................";
        cout<<"\n\tHasta la proxima..";
        cout<<"\n..........................\n\n";
        salir = true;
        break;
      default:
        cout<< "Opcion erronea"<<endl;
    }
  }
}
