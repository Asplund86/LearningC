/*Skriv ett program som ber�knar volymen och arean av en sf�r.
Sin undata ges sf�rens radie.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main() {
   system("chcp 1252");
   double r, v, a;
   printf("Ange sf�rens radie? ");
   scanf("%lf", &r);
   v = (4 * PI * r * r * r) / 3;
   a = 4 * PI * r * r;
   printf("Sf�rens volym �r: %.3f\n", v);
   printf("Sf�rens area �r: %.3f\n", a);
   system("pause");
   return 0;
}