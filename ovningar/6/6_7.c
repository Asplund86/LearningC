/*Skriv ett program med en funktion som skriver ut en linje*/

#include <stdio.h>
#include <stdlib.h>


void new_line(int x){
  for(int i=0; i<=x; i++)
    printf("-");
  printf("\n");
}

int main(){

  system("chcp 65001");

  printf("Hur långt streck vill du ha? ");
  int antal;
  scanf("%d", &antal);

  printf("new_line(antal)");

  


}
