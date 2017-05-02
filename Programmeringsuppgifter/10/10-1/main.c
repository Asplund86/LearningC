#include <stdio.h>
#include <stdlib.h>
#include <wctype.h>
#include <string.h>
#include <wchar.h>
#define N 100

int main() {

  char filnamn[N];
  int rad;
  double hightemp = 0;
  double sum = 0;
  int number = 0;
  double average = 0;


  printf("Ange templogg: ");

  fgets(filnamn, N, stdin);
  int ifilnamn = strlen(filnamn)-1;
  if(filnamn[ifilnamn] == '\n'){
    filnamn[ifilnamn] = '\0';
  }
  printf("%s", filnamn);

  //Öpnna loggfil.
  FILE *logg = fopen(filnamn, "r");
  if(logg == NULL){
    printf("FILE ERROR\n");
    exit(1);
  }

   while(fscanf(logg, "%d", &rad) == 1){
     if(rad > hightemp)
       hightemp = rad;
     sum += rad;
     number += 1;
   }

  average = sum / number;

  fclose(logg);

  printf("The highest reading temperature is: %.2f\n", hightemp);
  printf("The average temperaure is: %.2f", average);

}
