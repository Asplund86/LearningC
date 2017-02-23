/* Detta program r�knar ut omkretsen och arean p� en cirkel. Om radien <= 0 s�
skrivs en felutskrift ut*/
#include <stdio.h> // Inkluderar syntax bibliotek
#include <stdlib.h> // Inkluderar system bibliotek
#include <locale.h> // Inkluderar local bibliotek
#include <math.h> // Inkluderar math bibliotek
#define PI 3.14 // Definierar PI till 3.14

int main () {  
// Set locale g�r att ��� kan skrivas ut
   setlocale(LC_ALL,"");
// Definerar varibeln r som ska inneh�lla l�ngden p� radien
   int r;
   printf("Skriv l�ngden p� radien i cirkeln: ");
// L�ser in l�ngden p� radien
   scanf("%d", &r);
// Skapar en IF sats som kollar om inl�sningen av r <= 0
   if (r <= 0)
      printf("Radien m�ste vara minst 1. \n");
   else {
// Definierar variabeln omkrets som ber�knar omkretsen
      int omkrets = PI * r * 2;
// Definierar variabeln area som ber�knar arean
      int area = PI * r * r;
// Sen skriver vi ut resultat
      printf("Arean = %d och Omkretsen = %d\n", area, omkrets); 
   }
// sen pausar vi systemet f�r att se resultatet
   system("pause");
   return 0;

}
  