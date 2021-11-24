#ifndef TEATRO_DB_H
#define TEATRO_DB_H

#include "teatro.h"

#include <bits/stdc++.h>

using namespace std;

class TeatroDb {

   public:
	  void guardar_teatro(Teatro teatro[], int size);
	  void populate_teatros(vector<Teatro> *ptrTeatros);
};

#endif //TEATRO_DB_H


