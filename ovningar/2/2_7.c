/*�vning 2.7: G�r ett programm som l�ser in bredd och l�ngd p� en rektangel och sedan
r�knar ut omkretsen*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>
int main()
{
   system("chcp 1252");
   int bredd;
   int langd;
   int omk;
   printf("Best�m l�ngden p� rektangeln: ");
   scanf("%d", &langd);
   printf("Best�m bredden p� rektangeln: ");
   scanf("%d", &bredd);
   omk = (bredd * 2 + langd * 2);
   printf("Den totala omkretsen blir %d om l�ngden �r %d och bredden �r %d", omk, langd, bredd);
   system("pause");
   return 0;

   
   
  
}
