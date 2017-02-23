#include <stdio.h>
#include <stdlib.h>


/* Definiera 5 olika momssatser till konstanter */

#define MOMS 25
#define ARB_AVG 28.97
#define STAT_LAG 0
#define STAT_MEDEL 20
#define STAT_HOG 25

/* Definiera 3 konstanter */

#define LAG 1
#define MEDEL 2
#define HOG 3

/* Skapa en funktion */

double anbud(double x, double kskatt, int inkomst){
  double lon = x / (1-0.01*(kskatt+STAT_LAG+STAT_MEDEL+STAT_HOG));
  lon = lon + (lon*(ARB_AVG/100));
  lon = lon + (lon*(MOMS/100));
  return lon;

}

int main(){

  system("chcp 65001");

  while(1){
  printf("Ange en önskad vinst ");
  double vinst;
  scanf("%lf", &vinst);

  printf("Ange kommunalskatt ");
  double skatt;
  scanf("%lf", &skatt);

  printf("För att få en vinst på %.1f kr\nkrävs ett anbud på %.2f kr\n", vinst, anbud(vinst, skatt, MEDEL));

  }


}
