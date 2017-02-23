#include <stdio.h>
#include <stdlib.h>

int main () {
   system("chcp 1252");
   int width;
   int length;
   int thickness;

   printf("Välkommen till Postnord!\n");
   printf("Vänligen ange Bredd på ditt brev? ");
   scanf("%d", &width);
   printf("Vänligen ange Längd på ditt brev? ");
   scanf("%d", &length);
   printf("Vänligen ange tjockleken på ditt brev? ");
   scanf("%d", &thickness);
   if (length > 600 || thickness > 100 || (width + length + thickness > 900))
      printf("Måtten är för stora\n");
   else if (length < 140 || width < 90)
      printf("Måtten är för små\n");
   else
      printf("Måtten är korrekta\n");
   system("pause");
   return 0;
}