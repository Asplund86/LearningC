#include <stdio.h>
#include <math.h>

int main() {

    int domare;
    printf("Ange antal domare: ");
    scanf("%d", &domare);

    if (domare < 3)
      printf("För få domare!\n");

    else {

      while(1){

        double grad;
        double betyg;

        printf("Svårighetsgrad? (1.0 - 2.0)");
        if (scanf("%lf", &grad) != 1)
          break;

        double domar_poang;
        double max_poang;
        double min_poang;
        double sum;
        int i;

        for(i = 1; i <= domare; i++){
          printf("Domare nr%d´s poäng? ", i);
          if (scanf("%lf", &domar_poang) != 1)
            break;
          sum = sum + domar_poang;
          max_poang = fmax(max_poang, domar_poang);
          min_poang = fmin(min_poang, domar_poang);
        }

        if (i == domare + 1) {
          sum = sum - max_poang - min_poang;
          double slutpoang = sum / (domare - 2) * 3 * grad;
          printf("Hoppets poäng blir: %.2f\n", slutpoang);

        }
        else
          printf("Domarpoäng saknas!\n");

      }

    }
}
