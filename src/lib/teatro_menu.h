#ifndef TEATRO_MENU_H
#define TEATRO_MENU_H

#include "teatro_servicio.h"

 /*
  * Clase que mustra un menu al usuario y procesa la opcion deseada.
  */
class TeatroMenu{
  private:
    TeatroServicio teatroServicio;
    enum Opcion {
      BUSQUEDA_POR_ID = 1,
      BUSQUEDA_POR_NOMBRE,
      MOSTRAR_ALL_TEATROS,
      SALIR
    };
    bool validar_opcion(int);

  public:
    void mostrar_menu();
    void procesar(); 
};

#endif // TEATRO_MENU_H
