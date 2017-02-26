#include <stdio.h>
#include <ctype.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "");
  printf("Skriv ett tecken: ");
  char teck = getchar();
  if (isdigit(teck))
    printf("Det ÃÂ¤r en siffra\n"); 
  if (islower(teck)) {
    printf("Det är en liten bokstav\n");
    printf("Motsvarande stora bokstav är: %c\n",
           toupper(teck));
  }

  printf("%c\n", teck);


  char i[] = "Ä";

  printf("%s", i);
}
