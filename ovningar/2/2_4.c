#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()
{
   system("chcp 1252");
   int max_antal_tecken_int = INT_MAX;
   int min_antal_tecken_int = INT_MIN;
   int noga_float = FLT_DIG;
   int noga_double = DBL_DIG;
   printf("Max antal tecken i en int variabel �r %d\n", max_antal_tecken_int);
   printf("Min antal tecken i en int variabel �r %d\n", min_antal_tecken_int);
   printf("Noggranheten i decimaler f�r float �r %d\n", noga_float);
   printf("Noggranheten i decimaler f�r double �r %d\n", noga_double);
   system("pause");
   return 0;
}