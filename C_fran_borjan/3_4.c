/*
Skriv ett program som frågar dig om du är en pojke eller flicka.
Därefter ska programmet be dig skriva in dit pers.nr
läs in pers.nr som ett long long int.
den näst sista siffran i ett pers.nr avgör om det är en pojke eller flicka.
Programmet ska svara på om du skrev rätt i fråga ett.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"");
    int kon;
    long long int pers;

    printf("Är du en pojke eller flicka(0 för pojke och 1 för flicka)? ");
    scanf("%d", &kon);
    printf("Vad är ditt personnummer? ");
    scanf("%lld", &pers);

    pers = pers / 10;

    if (pers % 2 == 0 && kon == 1 || pers % 2 != 0 && kon == 0 )
        printf("Det stämmer!");
    else
        printf("Det stämmer inte!");






    return 0;

}
