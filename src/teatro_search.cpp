#include "teatro_search.h"

#include "teatro.h"

/**
 * Returns 0 if they are equal.
 * Return greater than 0 if t->id is greater than id.
 * Return less than 0 if t->id is smaller than id.
 */
int TeatroSearch::is_teatro_found(Teatro *t, int id) {
  return t->id - id;
}

int TeatroSearch::binary_search_recursive_helper(
  Teatro teatros[], int leftIndex, int rightIndex, int id)  {
    int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
  
    // Base case
    if (leftIndex > rightIndex) {
      return -1;
    }
    // Base case
    int result = this->is_teatro_found(&teatros[midIndex], id);
    if (!result) {
      return midIndex;
    }
  
    // Recursive case or inductive case.
    if (result > 0) {
      return this->binary_search_recursive_helper(teatros, leftIndex, midIndex - 1, id);
    } else {
      return this->binary_search_recursive_helper(teatros, midIndex + 1, rightIndex, id);
    }
}

/**
 * @array Elemement will be searched in this array.
 * @size Size of the array.
 * @search Element to search.
 *
 * Assumptions:
 *  - The array is sorted
 *
 * Running time O(log n) where n is the number of elements.
 *
 * Recursion
 *    - Base case: array[index] == search
 *    - Recursive case: if (search < array[index])
 *                         binary_search_recursive (array, left, mid - 1);
 *                      if (search > array[index])
 *                          binary_search_recursive (array, mid + 1, right);
 */
int TeatroSearch::binary_search_recursive(
  Teatro teatros[], int size, int id) {
  return this->binary_search_recursive_helper(teatros, 0, size - 1, id);
}

/**
 * Busca teatros por id.
 *
 * Asume que los teatros estan ordenas por indice.
 *
 * @param teatros[] arreglo de teatros.
 * @param size numero de elementos en el arreglo teatros.
 * @param id Id del teatro a buscar.
 * @return Regresa el indice donde el teatro esta. Si no se encuentra
 *.        regresa -1.
 */
int TeatroSearch::search_by_id(Teatro teatros[], int size, int id) {
  return this->binary_search_recursive(teatros, size, id);
}




