#ifndef TEATRO_H
#define TEATRO_H

#include<iostream>
#include<string.h>

using namespace std;

#define NOMBRE_SIZE 200

class Teatro {
	public:
		int id;
		char nombre[NOMBRE_SIZE];
	
	public:
		Teatro();
		Teatro(int id, char *nombre);
		void print();
};

struct TeatroCompararPorNombre
{
  /*
    Regresa true si la primera cadena es menor que la segunda. De otra
    forma false.
  */
   bool operator() (const Teatro& teatro1, const Teatro& teatro2) const
   {
      // 0 si las cadenas son iguales
      // 1 => si la primera cadena es mas grande que la segunda
      // 1 <= si la segunda cadena es mas grande que la primera.
      int result = strcmp(teatro1.nombre, teatro2.nombre);
      if (result == 0) {
        return false;
      } else if (result < 0) {
        return true;
      }
      return false;
   }
};

#endif //TEATRO_H


