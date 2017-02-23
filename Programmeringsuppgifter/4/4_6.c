/* Skriv ett program som beräknar summan av 1/1 - 1/2 + 1/3 - 1/4...
programmet skall avslutas när termen har ett absolutbelopp på 0,00001*/


#include <stdio.h>
#include <math.h>

int main() {

  int x = 1;

  for(int i = 0; i == 10000000; i++){
    if (x % 2 == 0){
      (1 / x) + (1 / (x + 1));
      x++;
    }
    else{
      (1 / x) - (1 / (x + 1));
      x++;
    }

    if (x == 0.00001)
      break;
    }
    printf("%d", x);
}
