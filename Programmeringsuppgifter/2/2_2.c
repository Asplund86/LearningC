/*Skriv ett program som läser in en temperatur uttryckt i graderna Far 
och som översätter temperaturen till graderna celsius*/

#include <stdio.h>
#include <stdlib.h>
int main () {
   double f, c;
   printf("Ange ge temperaturen i Fahrenheit: ");
   scanf("%lf", &f);
   c = (f-32)*5/9;
   printf("Temperaturen %.1f i Fahrenheit blir %.1f grader i Celsius\n", f, c);
   system("pause");
   return 0;
}