//Skriv ett program som väljer en random person från en textfil
//och skriver ut denne i kommandofönstret.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define N 100

int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");

  srand(time(NULL));

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

  //Line count.
  char line[N];
  int lineCount = 0;
  while(fgets(line, N, source)){
    lineCount++;
  }

  //Reopen source file.
  freopen(sourceName, "r", source);
  //Print random name to commandline.
  int randomName = rand() % lineCount;
  lineCount = 0;
  while(fgets(line, N, source)){
    if(lineCount == randomName)
      printf("%s", line);
    lineCount++;
  }
}
