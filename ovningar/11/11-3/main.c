#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 100

int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");

  char name[] = "Hello my friend!\n";

  for(char *p = name; p < name + strlen(name); p++)
    printf("%c", *p);

  for(char *p2 = name + strlen(name); p2 >= name; p2--)
    printf("%c", *p2);
}
