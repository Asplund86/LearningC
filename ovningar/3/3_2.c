#include <stdio.h>
#include <stdlib.h>

int main() {
   system("chcp 1252");
   int kort;
   int biljett;
   int antal;
   printf("Hur ofta planerar du att tr�na p� ett �r? ");
   scanf("%d", &antal);
   printf("Hur mycket kostar ett �rskort? ");
   scanf("%d", &kort);
   printf("Hur mycket kostar en eng�ngsbiljett? ");
   scanf("%d", &biljett);
   if (antal * biljett > kort) {
      printf("Det l�nar sig att k�pa ett �rskort!\nKostnad %dkr\n", kort);
   }
   else {
      printf("Det l�nar sig att k�pa en eng�ngsbiljett! Kostnad/�r %dkr", biljett * antal);
   }
   system("pause");
   return 0;
}
      