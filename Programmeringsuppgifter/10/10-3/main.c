#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 100

int main() {
  setlocale(LC_ALL, "sv_SE.UTF-8");

  //Be användare välja fil.
  char filename[N];
  printf("Open file: ");
  scanf("%s", &filename);
  if(filename[strlen(filename)-1] == '\n')
    filename[strlen(filename)-1] = '\0';

  //Öppna strömmen för den valda filen.
  FILE *file = fopen(filename, "r");
  if(file == NULL){
    printf("FILE ERROR");
    exit(1);
  }

  //Öppna strömmen för en temporär fil.
  char t_name[N];
  mkstemp(t_name);
  FILE *t = fopen(t_name, "w");



  //Kopiera in alla tecken från vald fil till temporär.
  //Förutom att tab skall ändras till ett mellanslag.
  int c;
  while( (c = fgetc(file)) != EOF){
    if(c == '\t')
      fprintf(t, " ");
    else
      fputc(c, t);
  }

  freopen(filename, "w", file);
  freopen(t_name, "r", t);


  //Kopiera tillbaka.
  while( (c = fgetc(t)) != EOF){
    fputc(c, file);
  }


  fclose(file), fclose(t);
  remove(t_name);
}
