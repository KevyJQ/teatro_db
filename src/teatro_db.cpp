#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "teatro.h"
#include "teatro_db.h"

#define TEATRO_DB_ARCHIVO "TEATRO_DATABASE.bin"

void TeatroDb::guardar_teatro(Teatro teatros[],int size){
	
	ofstream db_file(TEATRO_DB_ARCHIVO, ios::out | ios::binary);
	if(!db_file){
		cout<<"No se abrio el archivo"<<TEATRO_DB_ARCHIVO<<endl;
		exit(-1);
	}

	for(int i=0;i<size;i++){
		db_file.write((char *) &teatros[i], sizeof(Teatro));
	}

	db_file.close();
	if(!db_file.good()){
		cout<<"Error mientras cerraba el archivo"<<endl;
		exit(-1);
	}

}
