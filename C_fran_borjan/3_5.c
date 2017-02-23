/* Beräkna om sidorna på en triangel är liksidig(alla sidor lika), likbent(två sidor lika) eller oliksidig(inga sidor lika)
    sidor a,b,c. vinkel v.
    Programmet läser in två sidor och vinkeln. Beräkna sida C    c = square(a*a + b*b - 2*a*b*cosa)
    */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    printf("I detta program ska vi få fram om din rektangel är liksidig, likbent eller oliksidig\n");

    printf("Börja med att ange A sidan ");
    double a;
    scanf("%f", &a);

    printf("Ange sedan B sidan ");
    double b;
    scanf("%f", &b);

    printf("Ange sedan vinkeln mellan A och B (1-360) ");
    double v;
    scanf("%f", &v);



}
