#include <iostream>

#include "teatro.h"
#include "teatro_db.h"

using namespace std;

int main(){
	
	cout<< "Building database"<<endl;

	char nombre1[NOMBRE_SIZE] = "Teatro Insurgentes";
	Teatro teatro(1, nombre1);
	teatro.print();

	char nombre2[NOMBRE_SIZE] = "Teatro Valladolid";
	Teatro *ptrTeatro = new Teatro(2,nombre2);
	ptrTeatro->print();

	Teatro teatros[2] = {teatro, *ptrTeatro};

	TeatroDb teatro_db;
	cout<<"Guardando datos"<<endl;
	teatro_db.guardar_teatro(teatros,2);

	return 0;
}

