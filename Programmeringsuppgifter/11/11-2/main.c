#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double vect(double *a, int n){
  double s = 0;
  for(double *i = a; i < a+n; i++)
    s = s + *i * *i;
  return sqrt(s);
}



int main(){

  double arr[3] = {2.333, 2.333};

  double vec = vect(arr, 2);

  printf("%lf", vec);
}
