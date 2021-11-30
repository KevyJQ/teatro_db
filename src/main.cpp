#include <iostream>
#include <stdlib.h>

#include "teatro.h"
#include "teatro_db.h"
#include "teatro_search.h"
#include "teatro_menu.h"

#include <bits/stdc++.h>

using namespace std;

// 0. Pensar donde es el lugar correcto para definir las cosas.
// 1. Definir el comparador
// 2. Llenar el map con los teatros. Pensar cual es la Key y Value.
//    map<key, value, comparator>
//    map<Player, Player*, CompareByName> map;
//    Note: Iterar el vector para llenar el map.
// 3. Usar el map para buscar por nombre.

int main(){
  TeatroMenu teatroMenu;
  teatroMenu.procesar(); 

	return 0;
}


