#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 100

int main() {
  float x = 5.8;

  float *q1, *q2 = NULL;

  q1 = &x;

  if(q2 != NULL)
    printf("%f\n", *q2);
}
