/*�vning 2.5: G�r ett program som r�knar ut omkretsen om radien �r 5 och 
resultatet skall inneh�lla 3 decimaler*/

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
   printf("Omkretsen d� radien �r 5 �r: %.3f\n", omk);
   printf("Arean d� radien �r 5 �r: %.3f\n", area);
   system("pause");
   return 0;
}
