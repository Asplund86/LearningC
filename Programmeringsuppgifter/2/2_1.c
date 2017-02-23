/*Skriv ett program som beräknar volymen och arean av en sfär.
Sin undata ges sfärens radie.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main() {
   system("chcp 1252");
   double r, v, a;
   printf("Ange sfärens radie? ");
   scanf("%lf", &r);
   v = (4 * PI * r * r * r) / 3;
   a = 4 * PI * r * r;
   printf("Sfärens volym är: %.3f\n", v);
   printf("Sfärens area är: %.3f\n", a);
   system("pause");
   return 0;
}