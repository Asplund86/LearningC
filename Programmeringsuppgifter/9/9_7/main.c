#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(){

  int t1;
  int m1;
  int t2;
  int m2;
  char punkt;

  printf("Ange starttid (tt.mm): ");
  scanf("%d%c%d", &t1, &punkt, &m1);
  printf("Ange sluttid (tt.mm): ");
  scanf("%d%c%d", &t2, &punkt, &m2);

  int totalM1 = t1 * 60 + m1;
  int totalM2 = t2 * 60 + m2;
  int diff;
  if(totalM2 > totalM1){
    diff = totalM2 - totalM1;
  }
  printf("Mellan starttid och sluttid är det %d min.\n", diff);

}
