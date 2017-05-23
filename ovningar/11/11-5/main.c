// Make a file containing new variant of strcat with pointers.

#include <stdio.h>
#include <locale.h>

#define N 100

void appendS(char *t, const char *s){
  while(*t)
    *t++;
  while(*t++ = *s++)
        ;
}


int main(){

  setlocale(LC_ALL, "sv_SE.UTF-8");

  char name[] = "Mio Asplund";
  char twoNames[] = "Juni Asplund";

  appendS(twoNames, name);

  printf("%s", twoNames);

}
