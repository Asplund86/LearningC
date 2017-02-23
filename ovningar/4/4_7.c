/* Skriv ut en for loop som går från -1 till 1 i 20 steg och
skriv ut en tabell*/

#include <stdio.h>

int main() {

  double x;

  for (x = -1.0; x <=1; x = x + 0.1)
    printf("%.1f\n", x);

  return 0;

}
