
/* Skriv ett program som beräknar omk och area i en cirkel.
använd funktioner för att beräkna dessa. */

#include <stdio.h>
#include <stdlib.h>

#define  PI 3.14159265359


double omk(double a)
{
  return a * 2 * PI;
}

double ar(double a)
{
  return a * a * PI;
}


int main() {
  system("chcp 65001");
  printf("Ange cirkelns radie: ");
  double r;
  if(scanf("%lf", &r) != 1)
    printf("Ange ett värde!");

    double omkrets = omk(r);
    double area = ar(r);

  printf("Cirkelns area är %.2f och omkretsen är %.2f\n", area, omkrets);
}
