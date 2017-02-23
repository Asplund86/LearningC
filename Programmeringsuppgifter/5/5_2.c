/* skriv euklides algoritm */

#include <stdio.h>
#include <math.h>

int main() {

  int m;
  int n;
  int r;




    printf("Ange m: ");
    if (scanf("%d", &m) != 1)
      printf("Inget värde i m.\n");

    printf("Ange n: ");
    if (scanf("%d", &n) != 1)
      printf("Inget värde i n.\n");

  while (1) {

    r = m % n;

    if (r == 0) {
      return n;
      break;
    }
    else {
      m = n;
      n = r;
    }
  printf("Största gemensamma nämnare är %d\n", n);
  }
}
