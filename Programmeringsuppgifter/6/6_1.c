/* Skriv ett program med en funktion som beräknar ett heltals tecken
och om tal > 0 = 1 eller tal == 0 = 0 eller tal < 0 = -1. */

#include <stdio.h>
#include <stdlib.h>

int svar(int x){
  int tal;
  if(x > 0)
    tal = 1;
  else if(x == 0)
    tal = 0;
  else
    tal = -1;

  return tal;
}

int main(){

  system("chcp 65001");

  while(1){
    printf("Ange ett heltal");
    int heltal;
    scanf("%d", &heltal);

    printf("%d = %d \n", heltal, svar(heltal));
  }
}
