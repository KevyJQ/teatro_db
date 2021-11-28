#include "teatro_sort.h"

#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void TeatroSort::bubble_sort(vector<Teatro> *ptrTeatros){
  int i,j;
  int tmp = 0;
  for(i = 0; i < ptrTeatros->size() - 1; i++){ // n times where n = size
    for(j = 0; j < ptrTeatros->size() - 1; j++) { // n times where n = size
      if((*ptrTeatros)[j + 1].id < (*ptrTeatros)[j].id){
        Teatro tmp = (*ptrTeatros)[j];
        (*ptrTeatros)[j] = (*ptrTeatros)[j + 1];
        (*ptrTeatros)[j + 1] = tmp;
      }
    }
  }
}


int TeatroSort::particion(
    vector<Teatro> *ptrTeatros, int leftIndex, int rightIndex){
  int pivoteValue = (*ptrTeatros)[leftIndex].id;

  int i = leftIndex +1;

  for(int j = i; j<= rightIndex; j++){
    if ((*ptrTeatros)[j].id < pivoteValue){
      swap((*ptrTeatros)[i],(*ptrTeatros)[j]);
      i++;
    }
  }

  swap((*ptrTeatros)[leftIndex], (*ptrTeatros)[ i - 1]);
  return i - 1;
}

void TeatroSort::quick_sort_helper(
       vector<Teatro> *ptrTeatros, int leftIndex, int rightIndex){
  if(leftIndex < rightIndex){
    int pivoteIndex = particion(ptrTeatros, leftIndex, rightIndex);

    this->quick_sort_helper(ptrTeatros, leftIndex, pivoteIndex - 1);
    this->quick_sort_helper(ptrTeatros, pivoteIndex + 1, rightIndex);
  }
}

void TeatroSort::quick_sort(vector<Teatro> *ptrTeatros){
  this->quick_sort_helper(ptrTeatros, 0, ptrTeatros->size() - 1);
}


