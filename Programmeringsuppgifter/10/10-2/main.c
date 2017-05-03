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
  if(!fgets(filename, N, stdin)){
    printf("Please write something!");
    exit(1);
  }

  if(filename[strlen(filename)-1] =='\n')
    filename[strlen(filename)-1] = '\0';


  //Öppna strömmen för den valda filen.
  FILE *file = fopen(filename, "r");
  if(file == NULL){
    printf("FILE ERROR!\n");
    exit(1);
  }

  int c;
  while( (c = fgetc(file)) != EOF){
    if(c == '\t')
      printf("");
    else
      putchar(c);
  }
  fclose(file);
}
