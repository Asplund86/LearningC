#include <stdio.h>
#include <stdlib.h>

int main () {
   system("chcp 1252");
   int width;
   int length;
   int thickness;

   printf("V�lkommen till Postnord!\n");
   printf("V�nligen ange Bredd p� ditt brev? ");
   scanf("%d", &width);
   printf("V�nligen ange L�ngd p� ditt brev? ");
   scanf("%d", &length);
   printf("V�nligen ange tjockleken p� ditt brev? ");
   scanf("%d", &thickness);
   if (length > 600 || thickness > 100 || (width + length + thickness > 900))
      printf("M�tten �r f�r stora\n");
   else if (length < 140 || width < 90)
      printf("M�tten �r f�r sm�\n");
   else
      printf("M�tten �r korrekta\n");
   system("pause");
   return 0;
}