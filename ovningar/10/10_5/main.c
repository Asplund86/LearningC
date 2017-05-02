#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include <wctype.h>
#include <locale.h>
#include <ctype.h>
#include "elib.h"
#define N 100

//Funktion för att hitta vilken index
//första siffran finns.
int index_first_number(wchar_t *array){
  int c = 0;
  for(int i = 0; i < wcslen(array); i++){
    if(iswdigit(array[i]))
      break;
    c += 1;
  }
  return c;
}

//Funktion för att isolera namnet i raden till en variabel.
void get_name(char *to, const char *from){
  int i = 0;
  for(; !isdigit(from[i]); i++){
    to[i] = from[i];
  }
  to[i-1] = '\0';
}


int main(){
  char filnamn[N];
  char elev[N];
  char rad[N];
  char ny_rad[N];
  char buffert;
  setlocale(LC_ALL, "sv_SE.UTF-8");

  //Fråga användare vilken fil du vill ändra.
  printf("Open file: ");
  scanf("%s", &filnamn);

//  while ( (buff = getc(stdin)) != '\n' && !feof(stdin)) {
  //  ;
  //}

  //Ange vilket namn du vill ta bort.
  printf("Select name: ");
  scanf("%ls", &elev);

  //Öppna strömmen för vald fil.
  FILE *fil = fopen(filnamn, "r");
  if(fil == NULL){
    printf("File error!");
    exit(1);
  }

  //Öppnar en temporär ström.
  FILE *tmpfile(void);
  if(tmpfile == NULL){
    printf("FILE ERROR");
    exit(1);
  }

  //Läs varje rad och jämför med den valda elev.
  while(fscanf(fil, "%f", &rad)){
    printf("%f", rad);
  }
}
