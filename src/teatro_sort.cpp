#include "teatro_sort.h"

#include <iostream>
#include <string.h>
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
