/* Skriv en funktion som får ett heltal och ser om det är ett primtal. */

#include <stdio.h>
#include <stdlib.h>

_Bool primtal(int x){
  for(int k = 2; k<x; k++)
    if(x % k == 0)
      return 0;
  return 1;
}


int main() {

  system("chcp 65001");

  while(1){
    printf("Ange ett tal större än 0: ");
    int tal;
    if (scanf("%d", &tal) != 1)
      printf("Vänligen ange ett värde\n");
      break;

    if(tal > 1 && primtal(tal))
      printf("Primtal!\n");
    else
      printf("Ej primtal\n");


  }
}
