#include <stdio.h>
#include <math.h>
#define N 100

_Bool orto(int *a, int *b, int n){

  int s = 0;
  for(int *i = a; i < a+n; i++)
    s = s + *i * *i;
  double vectorA = sqrt(s);

  int s2= 0;
  for(int *l = b; l < b+n; l++)
    s2 = s2 + *l * *l;
  double vectorB = sqrt(s2);

  if(vectorA < 0 || vectorB < 0){
    if(fabs(vectorA) - fabs(vectorB) == 0)
      return 1;
  }
  return 0;

}


int main() {

}
