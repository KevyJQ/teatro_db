#ifndef TEATRO_SORT_H
#define TEATRO_SORT_H

#include <bits/stdc++.h>

#include "teatro.h"

 /*
  * Clase que ordena los teatros por Id
  */
class TeatroSort{
  private:
    int particion(
      vector<Teatro> *ptrTeatros, int leftIndex, int rightIndex);  
    void quick_sort_helper(
      vector<Teatro> *ptrTeatros, int leftIndex, int rightIndex);

  public:
    void bubble_sort(vector<Teatro> *ptrTeatros);
    void quick_sort(vector<Teatro> *ptrTeatros);
};

#endif // TEATRO_SORT_H
