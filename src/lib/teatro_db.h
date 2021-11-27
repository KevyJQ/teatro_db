#ifndef TEATRO_DB_H
#define TEATRO_DB_H

#include "teatro.h"
#include "teatro_servicio.h"

#include <bits/stdc++.h>

using namespace std;

class TeatroDb {
  private:
    bool procesar_linea(char *ptrLinea,
                        vector<Teatro> *ptrTeatros);
  public:
	  void guardar_teatro(Teatro teatro[], int size);
	  void populate_teatros(vector<Teatro> *ptrTeatros);
    
};

#endif //TEATRO_DB_H


