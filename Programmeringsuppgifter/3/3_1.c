#include <stdio.h>
#include <stdlib.h>

int main () {
   system("chcp 1252");
   int minuter;
   
   printf("Hur mycket ringer du per m�nad (min)? ");
   scanf("%d", &minuter);

   if (minuter > 66)
      printf("Anv�nd Plus\n");
   else if (minuter <= 66 && minuter >= 33)
      printf("Anv�nd Normal\n");
   else
      printf("Anv�nd Kontant\n");
   
   system("pause");
   return 0;
}