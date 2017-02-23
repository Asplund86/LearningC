#include <stdio.h>
#include <stdlib.h>

int main() {
   system("chcp 1252");
   double minperman;
   double krpermin = 0.67;
   printf("Hur många minuter ringer du per månad? ");
   scanf("%lf", &minperman);
   double total = minperman * krpermin;
   if (total >= 1000) {
      total = total * 0.9;
      printf("Du får en rabatt på 10procent eftersom din totala kostnad är över 1000kr/mån\n");
   }
   printf("Din totala månadskostnad är %.2fkr.\n", total);
   system("pause");
   return 0;
}
   
   
