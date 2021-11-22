#include <iostream>
#include <stdlib.h>

#include "teatro.h"
#include "teatro_db.h"
#include "teatro_search.h"
#include "teatro_menu.h"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
  // TeatroMenu teatroMenu;
  // teatroMenu.procesar(); 
  // Create an empty vector


  char nombre3[NOMBRE_SIZE] = "Teatro Siqueiros";
	Teatro *ptrTeatro3 = new Teatro(23,nombre3);

  char nombre4[NOMBRE_SIZE] = "Teatro Aldama";
	Teatro *ptrTeatro4 = new Teatro(44,nombre4);

  vector<Teatro> teatros;
  teatros.push_back(*ptrTeatro3);
  teatros.push_back(*ptrTeatro4);
  
  cout << "Usando vectores " << endl;
  for (Teatro teatro : teatros)
        teatro.print();
  
  cout << "Usando vectores como arreglos " << endl;
  for (int i = 0; i < teatros.size(); i++)
        teatros[i].print();

  // TeatroSearch ts;
  // int idToSearch = 44;

  // int indexTeatro = ts.search_by_id(teatros, sizeArray, idToSearch);
  // if (indexTeatro != -1) {
  //   cout << "Teatro encontrado en indice " << indexTeatro << endl;
  //   teatros[indexTeatro].print();
  // } else {
  //   cout << "Teatro No encontrado" << endl;
  // }

	return 0;
}

