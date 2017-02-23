/*Skriv ett program som översätter miles/gallon till liter/mil*/

#include <stdio.h>
#include <stdlib.h>
int main() {
   double miles, gallon;
   printf("Please insert your'e fuel consumption (miles/gallon): ");
   scanf("%lf", &miles);
   gallon = 1;
   double mil = 0.1609;
   double ltr = 3.785;
   mil = mil * miles;
   ltr = ltr * gallon;
   ltr = ltr / mil;
   printf("This will be the same  consumption as %.2f liter/mil\n", ltr);
   system("pause");
   return 0;
}
   