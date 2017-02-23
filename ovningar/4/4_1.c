

#include <stdio.h>

int main() {

    int n;
    printf("Ange ett heltal: ");
    scanf("%d", &n);

    int summa;
    int k = 1;

    while (k <= n) {
        summa = summa + k * k;
        k = k + 1;
    }

    printf("Summan ar %d\n", summa);
}
