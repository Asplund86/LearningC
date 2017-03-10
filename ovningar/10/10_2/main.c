#include <stdio.h>
#include "elib.h"
#include <wchar.h>
#include <string.h>
#include <wctype.h>
#include <stdlib.h>

int main(){
  double commentCounter = 0;
  double lineCounter = 0;
  wchar_t lineText[100];
  wchar_t message[30] = L"Vilken fil ska kollas?";
  FILE *f = read_file(message);

  while(fget_line(lineText, 100, f)){
    lineCounter++;
      if(wcsstr(lineText, L"//") != NULL)
        commentCounter++;
  }

  double procent = commentCounter / lineCounter * 100;
  printf("%.1f procent av innehållet i filen är kommentarer\n", procent);
}
