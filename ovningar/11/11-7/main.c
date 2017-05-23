// Write a program that checks if to the elements in two arrays match nummeric.
// Write a function with _Bool result. The first two parameters will
// contain start and end. The third will contain a result from a funciton.
// These three will be a double. The fourth parameter will be a pointer
// to a funtion with result of _Bool
// and containing two doubles as parameters. This second function
// will get a result of two doubles and be "true" if the difference is
// smaller then 10^-10.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define N 100

_Bool equalVariable(double x, double y){
  return fabs(x-y) < 1.0e-10;
}

_Bool equal(const double *first, const double *last, double *first2, _Bool (*fp)(double, double)){
  for(const double *p = first; p < last ; p++, first2++){
    if(!fp(*p, *first2))
      return 0;
  }
  return 1;
}

int main() {

  double a[] = {10, 2000, 34, 34, 34545, 54, 656};
  double b[] = {10, 2000, 32, 34};

  if(equal(a, a+4, b, equalVariable))
    printf("Lika!");
  else
    printf("Inte lika!");

}
