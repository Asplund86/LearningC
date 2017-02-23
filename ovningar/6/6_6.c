/* Skriv ett program som läser in ett årtal och sen anger om
det är ett skottår eller inte. Använd dig av funktionen ar_skottar.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


_Bool ar_skottar(int x){
  if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
    return x;
}

int main() {

  system("chpc 65001");

  printf("Vängligen ange ett årtal! ");
  int ar;
  scanf("%d", &ar);

  int skottar = ar_skottar(ar);

  if(skottar)
    printf("Skottår!");
  else
    printf("Inte skottår!");

}
