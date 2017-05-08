//Skriv ett program som dekrypterar rövarspråket.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

#define N 100

_Bool vokal(char x, char y[N]){
  for(int i; i<strlen(y); i++){
    if(x == y[i])
      return 1;
  }
  return 0;
}

int main() {
  setlocale(LC_ALL, "sv_SE.UTF-8");

  //Open file.
  char sourceName[N];
  printf("Open file: ");
  scanf("%s", sourceName);
  if(sourceName[strlen(sourceName) - 1] == '\n')
    sourceName[strlen(sourceName) - 1] == '\0';

  //Open source stream.
  FILE *source = fopen(sourceName, "r");
  if(source == NULL){
    printf("File not found!");
    exit(1);
  }

  //Main while loop.
  char line[N];
  char lowline[N];
  while(fgets(line, N, source)){
    for(int l = 0; l < strlen(line); l++){
      lowline[l] = tolower(line[l]);
    }
    for(int i = 0; i < strlen(line); i++){
      if(lowline[i] != 'o' && lowline[i] == lowline[i+2]
        && lowline[i+1] == 'o'){
          printf("%c", line[i]);
          i++;
          i++;
        }
      else
        printf("%c", line[i]);
      }
  }

  fclose(source);
  return 0;
}
