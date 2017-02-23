/*Skriv ett program som skriver ut hur många procent av denna isotop som återstår
efter S år.*/

 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>
 int main () {
   system("chcp 1252");
   printf("Antal år? ");
   int t;
   scanf("%d", &t);
   double lambda = log(2.0)/5730;
   double n0 = 100;  // 100 %
   double rest = n0 * exp(-lambda*t);
   printf("Det återstår %.1f procent", rest);
   system("pause");
   return 0;
}