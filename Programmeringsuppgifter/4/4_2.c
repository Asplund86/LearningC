/* Skriv ett program som skriver ut en tabell 1-12 som skriver ut talet,
talet i kvadrat och talet i kubik.*/

#include <stdio.h>

int main() {

    int tal = 1;
    double tik = 1;
    double tiku = 1;
    for (int i = 0; i < 12; i++) {
      printf("Tal: %d Tal i kvadrat: %.1lf Tal i kubik: %.1lf\n", tal, tik*tik, tiku*tiku*tiku);
      tal = tal + 1;
      tik += 1;
      tiku += 1;

    }

}
