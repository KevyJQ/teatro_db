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
  public:
    void populateTeatros();
    void buscarPorId();
    void buscarPorNombre();
    void mostrar_all_teatros();
};

#endif //TEATRO_SERVICIO_H
