#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
#include <string.h>
#include "lib/elib.h"
#define N 100



int main(){
  wchar_t filnamn[N];
  printf("%s\n", stdin);
  get_line(filnamn, 20);

  printf("%ls\n", filnamn);



  get_line(filnamn, 20);

  wchar_t c;
  if((c = getwc(stdin)) != L'\n' && c != EOF)
    ;

    printf("%ls\n", stdin);
}
