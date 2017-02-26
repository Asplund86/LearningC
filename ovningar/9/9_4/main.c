#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>
#include <stddef.h>


int main() {
  setlocale(LC_ALL, "");
  printf("Skriv ett tecken: ");
  wchar_t teck = getwchar();
  if (isdigit(teck))
    printf("Det är en siffra\n"); 
  if (iswlower(teck)) {
    printf("Det är en liten bokstav\n");
    printf("Motsvarande stora bokstav är: %lc\n",
           towupper(teck));
  }



}
