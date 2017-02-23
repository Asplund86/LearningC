/*Skriv ett program som tar två punkter i ett kordinatsystem och
beräknar avståndet*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
   system("chcp 1252");
   double x1, x2, y1, y2;
   printf("Skriv in kordinaterna för punkt A: X? ");
   scanf("%lf", &x1);
   printf("Y? ");
   scanf("%lf", &y1);
   printf("Skriv in koordinaterna för punkt B: X? ");
   scanf("%lf", &x2);
   printf("Y? ");
   scanf("%lf", &y2);
   double avstand = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)); 
   printf("Punkterna A (%.2f, %.2f) och B (%.2f, %.2f)", x1, y1, x2, y2);
   printf("har ett avstånd på %.2f\n", avstand);
   system("pause");
   return 0;
}
