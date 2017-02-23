/* Skrive ett program som läser in ett godtyckligt antal
heltal. När användaren teckenkominationen för EOF skall
programmet skriva ut det största och det minsta av de
inlästa heltalen.*/

#include <stdio.h>
#include <limits.h>

int main() {
  int storsta = INT_MIN;
  int minsta = INT_MAX;
  int tal;
  while (1) {
    printf("Vänligen skriv ett heltal (markera EOF för att sluta) ");
    if (scanf("%d\n", &tal) != 1)
      break;
    if (tal > storsta)
      storsta = tal;
    if (tal < minsta)
      minsta = tal;
  }

  printf("Minsta: %d\n Största: %d\n", minsta, storsta);



}
