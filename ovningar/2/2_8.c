/*�vning 2.8: G�r ett programm som l�ser in en varas pris, inklusive moms. 
En variabel med typ int med momssatsen. Programmet skall r�kna ut varans pris exkl. moms
sj�lva momsen.*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>
int main()
{
   system("chcp 1252");
   double Prisink;
   int moms;
   printf("Varans pris: ");
   scanf("%lf", &Prisink);
   printf("Momssats: ");
   scanf("%d", &moms);
   double Prisexkl = Prisink * (1 - moms * 0.01);
   printf("Inklusive moms: %.3f kr\n", Prisink);
   printf("Exklusive moms: %.3f kr\n", Prisexkl);
   printf("Moms:           %.3f kr\n", Prisink - Prisexkl);
   system("pause");
   return 0;

   
   
  
}
