#include <stdio.h>
#include <stdlib.h>

int main() {
   system("chcp 1252");
   double point;
   printf("Vilken poäng fick du på provet? ");
   scanf("%lf", &point);
   if (point >= 45)
      printf("Betyg: A\n");
   else if (point >= 40)
      printf("Betyg: B\n");
   else if (point >= 35)
      printf("Betyg: C\n");
   else if (point >= 30)
      printf("Betyg: D\n");
   else if (point >= 25)
      printf("Betyg: E\n");
   else
      printf("Du är underkänd!\n");

   
   system("pause");
   return 0;
}