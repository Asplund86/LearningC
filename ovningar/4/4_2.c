

#include <stdio.h>

int main() {

    printf("N? ");
    int n;
    scanf("%d", &n);

    double summa = 0;
    double k = 1;

    while (k <= n) {
        summa = summa + 1.0/k;
        k = k + 1;
    }

    printf("Summan ar %lf", summa);
}
