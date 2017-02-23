

#include <stdio.h>

int main() {

    printf("FrŒn vilken hšjd slŠpper du bollen (i meter)? ");
    int m;
    scanf("%d", &m);

    int studs = 1;
    int i;

    while (m >= 0.01) {
        m = m * 0.7;
        studs = studs + 1;
    }

    printf("Studsar = %d", studs);

    }
