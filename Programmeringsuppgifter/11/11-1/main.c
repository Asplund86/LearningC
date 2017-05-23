// Write a function that has one parameter(pointer). A function that
// takes a string and writes it backwards.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <locale.h>

#define N 100

void backwards(char *string){
  char *laststring = string+strlen(string)-1;
  char c;

  for(;string < laststring; string++, laststring--){
    c = *string;
    *string = *laststring;
    *laststring = c;
  }

}

int main(){

  setlocale(LC_ALL, "sv_SE.UTF-8");

  printf("Skriv en text!");
  char t[N];
  scanf("%s", t);

  backwards(t);

  printf("%s\n", t);
 }
