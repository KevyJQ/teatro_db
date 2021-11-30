#include "teatro_db.h"

#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <bits/stdc++.h>

#include "teatro.h"

using namespace std;

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

/*
 * Regresa {@code true} si se proceso la linea sin error,
 * de otra manera regresa {@code false}.
 */

bool TeatroDb::procesar_linea(char *ptrLinea,   
                                 vector<Teatro> *ptrTeatros){
  // 3. Tokenizar cada line.
  char *token = strtok(ptrLinea, ":");
  int id;
  char *name = NULL;
  if (token != NULL) {
    id = atoi(token);
    token = strtok(NULL, "\n");
    if (token != NULL) {
      name = token;
    }
  }
  
  if (name == NULL) {
    return false;
  }

  Teatro *ptrTeatro = new Teatro(id,name);
  ptrTeatros->push_back(*ptrTeatro);
  delete ptrTeatro;
  return true;
}

void TeatroDb::populate_teatros(vector<Teatro> *ptrTeatros) {
  // 1. Leer el archivo que contiene los teatros
  string line;
  ifstream myfile("teatros.txt");//Lectura del documento

  if (!myfile.is_open()) {
    cout << "No se pudo abrir el archivo " << endl;
    exit (EXIT_FAILURE);
  }

  // 2. Imprimir cada linea del archivo.
  char *ptr = new char[line.length() + 1];
  while (getline(myfile, line)) {
    strcpy(ptr, line.c_str()); // 45:Teatro Broadway
    if (!this->procesar_linea(ptr, ptrTeatros)) {
      cout << "Formato de archivo incorrecto!! " << endl;
      delete[] ptr;
      myfile.close();
      exit (EXIT_FAILURE);
    }
  }

  // Regresando la memoria que se pidio. Si no se regresa,
  // va haber memory leaks.
  delete[] ptr;
  myfile.close();
}

