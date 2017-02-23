#include <stdio.h>
#include <stdlib.h>

int main () {
   system("chcp 1252");
   int minuter;
   
   printf("Hur mycket ringer du per månad (min)? ");
   scanf("%d", &minuter);

   if (minuter > 66)
      printf("Använd Plus\n");
   else if (minuter <= 66 && minuter >= 33)
      printf("Använd Normal\n");
   else
      printf("Använd Kontant\n");
   
   system("pause");
   return 0;
}