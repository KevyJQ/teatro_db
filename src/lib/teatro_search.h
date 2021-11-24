#ifndef TEATRO_SEARCH_H
#define TEATRO_SEARCH_H

#include "teatro.h"

/**
* Busca teatros por:
*
* - id
* - nombre
*/

class TeatroSearch {

  public:
	  int search_by_id(Teatro teatro[], int size, int id);
  private:
    int is_teatro_found(Teatro *t, int id);
    int binary_search_recursive_helper(
      Teatro teatros[], int leftIndex, int rightIndex, int id);
    int binary_search_recursive(
      Teatro teatros[], int size, int id);
};
#endif //TEATRO_SEARCH_H

