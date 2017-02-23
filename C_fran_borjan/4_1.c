

/*Skriv ett program som läser in ett heltal n. Och beräknar summan.*/

#include <stdio.h>
#

int main() {

    printf("åäöÅÄÖ");

    printf("Ange heltal: ");
    int n;
    scanf("%d", &n);
    int summa = 0;
    int k = 1;
    while (k <= n) {
        summa = summa + k;
        k = k + 1;
    }
    printf("Summan blir %d\n", summa);

}
