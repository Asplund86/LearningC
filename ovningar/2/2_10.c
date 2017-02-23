#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   system("chcp 1252");
   double hot, m, t, o, to, f, l, s;
   printf("Temperaturer i veckan som gått:\n");
   printf("Måndag: ");
   scanf("%lf", &m);
   printf("Tisdag: ");
   scanf("%lf", &t);
   hot = fmax(m, t);
   printf("Onsdag: ");
   scanf("%lf", &o);
   hot = fmax(hot, o);
   printf("Torsdag: ");
   scanf("%lf", &to);
   hot = fmax(hot, to);
   printf("Fredag: ");
   scanf("%lf", &f);
   hot = fmax(hot, f);
   printf("Lördag: ");
   scanf("%lf", &l);
   hot = fmax(hot, l);
   printf("Söndag: ");
   scanf("%lf", &s);
   hot = fmax(hot, s);
   

   printf("Temperaturen var som högst %.1f denna vecka\n", hot); 
   system("pause");
   return 0;
}


