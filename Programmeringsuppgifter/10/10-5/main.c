//Skriv ett program som läser en befintlig textfil
//och söker efter de rader i filen som innehåller en viss text.
//De funna raderna skall kopieras till en ny fil. Namnet på den
//befintliga filen och på den nya filen samt den text man söker
//skall läsas från terminalen.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

#define N 100

int main() {

  setlocale(LC_ALL, "sv_SE.UTF-8");

  //Open file.
  char sourceName[N];
  printf("Open file: ");
  scanf("%s", sourceName);
  if(sourceName[strlen(sourceName - 1)] == '\n')
    sourceName[strlen(sourceName - 1)] == '\0';

  //Open source stream.
  FILE *source = fopen(sourceName, "r");
  if(source == NULL){
    printf("File not found!");
    exit(1);
  }

  //Open target file.
  char targetName[N];
  printf("Save to: ");
  scanf("%s" targetName);
  if(targetName[strlen(targetName - 1)] == '\n')
    targetName[strlen(targetName - 1)] == '\0';

  //Open target stream.
  FILE *target = fopen[targetName, "w"];
  if(target == NULL){
    printf("File error");
    exit(1);
  }
}
