/*SKriv ett program som frågar dig om du är man eller kvinna.
Sen ska programmet läsa in persnummer. Skriv en funktion som räknar ut
om persnummret är en kvinna.*/

#include <stdio.h>
#include <stdlib.h>

_Bool ar_kvinna(long long int x){
  x = x / 10;
  return x % 2 == 0;
}

int main(){

  system("chcp 65001");

  long long int persnr;
  printf("Är du en man eller kvinna? 0 för man 1 för kvinna. ");
  int kon;
  scanf("%d", &kon);

  printf("Vänligen ange personnummer: ");
  scanf("%lld", &persnr);

  if(ar_kvinna(persnr) == kon)
    printf("Stämmer!");
  else
    printf("Stämmer inte!");
}
