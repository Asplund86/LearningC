//Skriv ett program som tar texten från en fil och skriver ut
//den i kommandofönstret om en rad är tom skall denne inte skrivas.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define N 100

int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");

  //Open file.
  char sourceName[N];
  printf("Print file(without empty lines): ");
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
  while(fgets(line, N, source)){
    _Bool emptyLine = 1;
    for(int i=0; i < strlen(line); i++){
      if(isalnum(line[i]))
        emptyLine = 0;
    }
    if(emptyLine)
      ;
    else
      printf("%s", line);
  }
}
