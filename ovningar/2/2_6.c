/*Övning 2.5: Gör ett program som räknar ut omkretsen och arean 
då användaren får ange radie och 
resultatet skall innehålla 3 decimaler*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#define PI 3.41459
int main()
{
   system("chcp 1252");
   float r;
   printf("Ange radie: ");
   scanf("%f", &r); 
   double omk = 2 * PI * r;
   double area = PI * r * r;
   printf("Omkretsen blir: %.3f\n", omk);
   printf("Arean blir: %.3f\n", area);
   system("pause");
   return 0;
}
