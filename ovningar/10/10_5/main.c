#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include <wctype.h>
#include "elib.h"
#define N 100

//Funktion för att hitta vilken index
//första siffran finns.
int index_first_number(wchar_t *array){
  int c = 0;
  for(int i = 0; i < wcslen(array); i++){
    if(iswdigit(array[i]))
      break;
    c += 1;
  }
  return c;
}

int main(){

}
