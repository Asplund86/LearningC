/*Skriv ett program som innehåller två funktioner. read_int, som läser in
ett heltal. read_double, som läser in en flytande tal. Skriv en funktion
tar två värden och höjer det ena med det andra. I main använd funktionerna
read_int och read_double.*/

#include <stdio.h>
#include <stdlib.h>

int read_int(void){
  int x;
  scanf("%d", &x);
  return x;
}

double read_double(void){
  double x;
  scanf("%lf", &x);
  return x;
}

double upphojt_till(double x, int n){
  double res = 1;
  int i = 1;
  if (n > 0){
    for(; i <=n; i++){
      res = res * x;
    }
  }else {
    for(; i <= -n; i++){
      res = res / x;
    }
  }
  return res;
}

  int main() {

    system("chcp 65001");

    printf("Vänligen ange en siffra: ");
    double x = read_double();

    printf("%.1f skall vara upphöjt till? ", x);
    int n = read_int();

    printf("%.1f upphöjt till %d blir %f", x, n, upphojt_till(x, n));

  }
