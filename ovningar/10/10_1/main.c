#include "elib.h"
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");
  wchar_t init[] = L"Vad ska personregistret heta? ";
  FILE *personer = appendto_file(init);
  wchar_t namn[100];
  while(1){
    printf("Skriv in ett namn: ");
    if(fgetws(namn, 100, stdin) == NULL)
      break;
    fputws(namn, personer);
  }
}
