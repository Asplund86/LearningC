/*
Skriv en funktion som beräknar vad en vara kostar inkl moms.
Parametrar skall vara pris exkl moms och momsats.
*/

#include <stdio.h>
#include <stdlib.h>

double prisinklmoms(double exkl, double moms){

  moms = exkl * (moms / 100);

  double inkl = exkl + moms;

  return inkl;

}

int main(){

  system("chcp 65001");

  while(1){
    printf("Ange varans pris(exkl moms): ");
    double pris;
    scanf("%lf", &pris);

    printf("Ange momsats: ");
    double moms;
    scanf("%lf", &moms);

    printf("%.2fkr inkl moms\n", prisinklmoms(pris, moms));
  }
}
