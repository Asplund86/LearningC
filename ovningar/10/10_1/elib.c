#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>

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

_Bool setLineToBreak_char(char *a){
  int i = strlen(a) - 1;
  if(a[i] == '\n'){
    a[i] = '\0';
    return 1;
  }
  return 0;
}

//


_Bool fget_line(wchar_t *a, int n, FILE *f){
  if(fgetws(a, n, f) == NULL)
    return 0;
  if(!setLineToBreak(a)){
    fskip_line(f);
  }
  return 1;
}

//

_Bool fget_line_char(char *a, int n, FILE *f){
  if(fgets(a, n, f) == NULL)
    return 0;
  if(!setLineToBreak_char(a)){
    fskip_line(f);
  }
  return 1;
}

//

_Bool get_line(wchar_t *a, int n){
  return fget_line(a, n, stdin);
}

//

_Bool get_line_char(char *a, int n){
  return fget_line_char(a, n, stdin);
}

//

FILE *read_file(const wchar_t *commit){
  char name[100];
  printf("%ls", commit);
  get_line_char(name, 100);
  FILE *f = fopen(name, "r");
  if(f == NULL){
    printf("Filen \" %s \" kunde inte öppnas.\n", name);
    exit(1);
  }
  return f;
}

//

FILE *writeto_file(const wchar_t *commit){
  char name[100];
  printf("%ls", commit);
  get_line_char(name, 100);
  FILE *f = fopen(name, "w");
  if(f == NULL){
    printf("Filen \" %s \" kunde inte öppnas.\n", name);
    exit(1);
  }
  return f;
}

//

FILE *appendto_file(const wchar_t *commit){
  char name[100];
  printf("%ls", commit);
  get_line_char(name, 100);
  FILE *f = fopen(name, "a");
  if(f == NULL){
    printf("Filen \" %s \" kunde inte öppnas.\n", name);
    exit(1);
  }
  return f;
}

//
