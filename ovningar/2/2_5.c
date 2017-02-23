/*Övning 2.5: Gör ett program som räknar ut omkretsen om radien är 5 och 
resultatet skall innehålla 3 decimaler*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#define PI 3.41459
int main()
{
   system("chcp 1252");
   double r = 5;
   double omk = 2 * PI * r;
   double area = PI * r * r;
   printf("Omkretsen då radien är 5 är: %.3f\n", omk);
   printf("Arean då radien är 5 är: %.3f\n", area);
   system("pause");
   return 0;
}
