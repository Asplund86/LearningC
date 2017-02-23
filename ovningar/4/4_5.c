#include <stdio.h>

int main() {

  printf("n?");
  int n;
  scanf("%d", &n);

  int summa = 0;
  int i;

  for (i = 0; i <= n; i++) {
    summa = summa + i;
  }

  printf("Summan är: %d\n", summa);

  return 0;
}
