/* Skriv ett program som skriver en tabell av
multiplikationstabellen beroende p\xE5 vilken siffra du skriver.*/


#include <stdio.h>
#include <stdlib.h> // Inkludera stdlib.h

int main() {
  system("chcp 65001"); // Skriv in detta för att ändra teckentabell.

  printf("Vänligen skriv in hur många uträkningar av MT du vill ha: ");
  int max;
  scanf("%d", &max);

  int rad = 0;
  int num;
  for(int i = 1; i <= max; i++){
    for(int j = 1; j <= i; j++){
      printf("%d ", i * j);
    }
    printf("\n");
  }
}
