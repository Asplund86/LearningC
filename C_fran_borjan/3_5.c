/* Ber�kna om sidorna p� en triangel �r liksidig(alla sidor lika), likbent(tv� sidor lika) eller oliksidig(inga sidor lika)
    sidor a,b,c. vinkel v.
    Programmet l�ser in tv� sidor och vinkeln. Ber�kna sida C    c = square(a*a + b*b - 2*a*b*cosa)
    */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    printf("I detta program ska vi f� fram om din rektangel �r liksidig, likbent eller oliksidig\n");

    printf("B�rja med att ange A sidan ");
    double a;
    scanf("%f", &a);

    printf("Ange sedan B sidan ");
    double b;
    scanf("%f", &b);

    printf("Ange sedan vinkeln mellan A och B (1-360) ");
    double v;
    scanf("%f", &v);



}
