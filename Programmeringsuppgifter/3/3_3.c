/* Beräkna om postnumret ligger i ett visst distrikt. 
Götaland 20-62, 65-66. Norrland 80-99. övriga svealand.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
   setlocale(LC_ALL,"");
   int nr;
   printf("Ange postnummer? "); 
   scanf("%d", &nr);

  nr = nr / 1000;

   if (nr >= 20 && nr <= 62 || nr == 65 || nr == 66)
      printf("Götaland\n");
   else if (nr >= 80)
      printf("Norrland\n");
   else
      printf("Svealand\n");


system("pause");
return 0;
}