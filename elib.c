#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

void fskip_line(FILE *f){
  int c;
  while( (c = fgetwc(f)) != '\n' && c != EOF){
    ;
  }
}

//

void skip_line(void){
  fskip_line(stdin);
}

//

_Bool setLineToBreak(wchar_t *a){
  int i = wcslen(a) - 1;
  if(a[i] == L'\n'){
    a[i] = L'\0';
    return 1;
  }
  return 0;
}

//

_Bool fget_line(wchar_t *a, int n, FILE *f){
  if(fgetws(a, n, f) == NULL)
    return 0;
  if(!setLineToBreak(a)){
    fskip_line(a);
  }
  return 1;
}

//

_Bool get_line(wchar_t *a, int n){
  return fget_line(a, n, stdin);
}
