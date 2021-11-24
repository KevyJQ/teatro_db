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

void TeatroDb::populate_teatros(vector<Teatro> *ptrTeatros) {
  // 1. Leer el archivo que contiene los teatros
  string line;
  ifstream myfile("teatros.txt");
  // 2. Imprimir cada linea del archivo.
  char *ptr = new char[line.length() + 1];  
  cout << endl;
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      char *ptr = new char[line.length() + 1];
      strcpy(ptr, line.c_str());
      //cout << ptr << endl; //Prueba de impresion
      strcpy(ptr, line.c_str());
      char *token = strtok(ptr, ":");
      while (token != NULL) {
        //cout << "Token: " << token << endl;
        token = strtok(NULL, " ");
      }
      delete[] ptr;
    }
    myfile.close();
  } else {
    cout << "Unable to open the file";
  }
  // 3. Tokenizar cada line.

  //char *token = strtok(ptr, ":");
  // 4. Crear un objecto teatro con los tokens
  
  // 5. Hacer push del teatro en el vector.
  // char *st = "456";
  // int = atoi (buffer);


  cout<< "..Llenado teatros.." << endl;
  cout<<"\nBuilding database"<<endl;

  char nombre1[NOMBRE_SIZE] = "Teatro Siqueiros Ptr";
	Teatro *ptrTeatro1 = new Teatro(20,nombre1);

  char nombre2[NOMBRE_SIZE] = "Teatro Aldama Ptr";
	Teatro *ptrTeatro2 = new Teatro(22,nombre2);
  
  char nombre3[NOMBRE_SIZE] = "Teatro Siqueiros";
	Teatro *ptrTeatro3 = new Teatro(23,nombre3);

  char nombre4[NOMBRE_SIZE] = "Teatro Aldama";
	Teatro *ptrTeatro4 = new Teatro(26,nombre4);

  ptrTeatros->push_back(*ptrTeatro1);
  ptrTeatros->push_back(*ptrTeatro2);
  ptrTeatros->push_back(*ptrTeatro3);
  ptrTeatros->push_back(*ptrTeatro4);// Referenciar mienbros de la clase
 }
