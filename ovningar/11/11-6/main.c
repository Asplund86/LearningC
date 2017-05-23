//write a program that takes 3 arguments to main function.
//It will write in names to a protocol.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define N 100

int main(int argc, char *argv[]){

  setlocale(LC_ALL, "sv_SE.UTF-8");

  if(argc < 1 || argc > 2){
    printf("Wrong number of arguments!\n");
    exit(1);
  }

  FILE *source = fopen(argv[1], "a");
  if(source == NULL){
    fprintf(stderr, "File not found %s\n", argv[1]);
    exit(2);
  }
  char name[N];
  while(1){
    printf("Add name(q for quit): ");
    if(fgets(name, N, stdin) == NULL || name[0] == 'q')
      exit(3);
    fputs(name, source);
  }
  fclose(source);
}
