#ifndef TEATRO_SERVICIO_H
#define TEATRO_SERVICIO_H

#include <bits/stdc++.h>

#include "teatro.h"
#include "teatro_search.h"

using namespace std;

class TeatroServicio {
  private:
    vector<Teatro> teatros;
    TeatroSearch ts;  
    // Declarar map con el comparator a usar.
    // map<key, value, comparator>
    // key - Teatro
    // value - Teatro*
    map<Teatro, Teatro*, TeatroCompararPorNombre> mapTeatros;
  public:
    void populateTeatros();
    void buscarPorId();
    void buscarPorNombre();
    void mostrar_all_teatros();
};

#endif //TEATRO_SERVICIO_H

