/* Detta program räknar ut omkretsen och arean på en cirkel. Om radien <= 0 så
skrivs en felutskrift ut*/
#include <stdio.h> // Inkluderar syntax bibliotek
#include <stdlib.h> // Inkluderar system bibliotek
#include <locale.h> // Inkluderar local bibliotek
#include <math.h> // Inkluderar math bibliotek
#define PI 3.14 // Definierar PI till 3.14

int main () {  
// Set locale gör att åäö kan skrivas ut
   setlocale(LC_ALL,"");
// Definerar varibeln r som ska innehålla längden på radien
   int r;
   printf("Skriv längden på radien i cirkeln: ");
// Läser in längden på radien
   scanf("%d", &r);
// Skapar en IF sats som kollar om inläsningen av r <= 0
   if (r <= 0)
      printf("Radien måste vara minst 1. \n");
   else {
// Definierar variabeln omkrets som beräknar omkretsen
      int omkrets = PI * r * 2;
// Definierar variabeln area som beräknar arean
      int area = PI * r * r;
// Sen skriver vi ut resultat
      printf("Arean = %d och Omkretsen = %d\n", area, omkrets); 
   }
// sen pausar vi systemet för att se resultatet
   system("pause");
   return 0;

}
  