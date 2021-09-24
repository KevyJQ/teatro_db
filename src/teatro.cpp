#include <iostream>
#include <string.h>

#include "teatro.h"

using namespace std;

Teatro::Teatro(int id, char *nombre){
	cout<<"Constructor teatro"<<endl;
	
	this -> id = id;
	int bytesToCopy = strlen(nombre)% NOMBRE_SIZE;
	memcpy(this -> nombre ,nombre, bytesToCopy);
	this -> nombre[NOMBRE_SIZE -1] = '\0';
}

void Teatro::print(){
	cout<<"id: "<<this -> id<<" Nombre: "<<this -> nombre <<endl;
}
