#include <stdio.h>
#include <stdlib.h>

int main() {
   system("chcp 1252");
   double minperman;
   double krpermin = 0.67;
   printf("Hur m�nga minuter ringer du per m�nad? ");
   scanf("%lf", &minperman);
   double total = minperman * krpermin;
   if (total >= 1000) {
      total = total * 0.9;
      printf("Du f�r en rabatt p� 10procent eftersom din totala kostnad �r �ver 1000kr/m�n\n");
   }
   printf("Din totala m�nadskostnad �r %.2fkr.\n", total);
   system("pause");
   return 0;
}
   
   
