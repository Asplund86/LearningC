/*Skriv ett program som tar tv� punkter i ett kordinatsystem och
ber�knar avst�ndet*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
   system("chcp 1252");
   double x1, x2, y1, y2;
   printf("Skriv in kordinaterna f�r punkt A: X? ");
   scanf("%lf", &x1);
   printf("Y? ");
   scanf("%lf", &y1);
   printf("Skriv in koordinaterna f�r punkt B: X? ");
   scanf("%lf", &x2);
   printf("Y? ");
   scanf("%lf", &y2);
   double avstand = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)); 
   printf("Punkterna A (%.2f, %.2f) och B (%.2f, %.2f)", x1, y1, x2, y2);
   printf("har ett avst�nd p� %.2f\n", avstand);
   system("pause");
   return 0;
}
