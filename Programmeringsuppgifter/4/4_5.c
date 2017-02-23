/* Skriv ett program som läser in ett visst årtal från användaren och
programmet ska visa beräknad antal invånare.

Prognos.

- Vid början 2015 hade kommunen 26000 invånare.
- Antal födda på ett år 0.7%
- Antal avlidna på ett år 0.6%
- Inflyttade / år 300
- Utflyttade / år 325
*/

#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>

int main() {

  //setlocale(LC_CTYPE, "en_AU");
  //system("chcp 65001");

  int inv = 26000;
  int yearz = 2015;


  printf("Ange vilket årtal du vill upskatta(efter 2015): ");
  int yearx;
  scanf("%d", &yearx);

  int yeardiff = yearx - yearz;

  if (yearx > 2015){

    for(int i = 0; i < yeardiff; i++){
      inv += 300;
      inv -= 325;
      inv = inv * 1.07;
      inv = inv / 1.06;
    }
    printf("Antaler invånare år %d beräknas till %d.\n", yearx, inv);
  }
  else{
    printf("Årtalet måste vara efter 2015!\n");
  }




}
