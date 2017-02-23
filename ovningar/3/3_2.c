#include <stdio.h>
#include <stdlib.h>

int main() {
   system("chcp 1252");
   int kort;
   int biljett;
   int antal;
   printf("Hur ofta planerar du att träna på ett år? ");
   scanf("%d", &antal);
   printf("Hur mycket kostar ett årskort? ");
   scanf("%d", &kort);
   printf("Hur mycket kostar en engångsbiljett? ");
   scanf("%d", &biljett);
   if (antal * biljett > kort) {
      printf("Det lönar sig att köpa ett årskort!\nKostnad %dkr\n", kort);
   }
   else {
      printf("Det lönar sig att köpa en engångsbiljett! Kostnad/år %dkr", biljett * antal);
   }
   system("pause");
   return 0;
}
      