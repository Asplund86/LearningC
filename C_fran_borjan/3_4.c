/*
Skriv ett program som fr�gar dig om du �r en pojke eller flicka.
D�refter ska programmet be dig skriva in dit pers.nr
l�s in pers.nr som ett long long int.
den n�st sista siffran i ett pers.nr avg�r om det �r en pojke eller flicka.
Programmet ska svara p� om du skrev r�tt i fr�ga ett.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"");
    int kon;
    long long int pers;

    printf("�r du en pojke eller flicka(0 f�r pojke och 1 f�r flicka)? ");
    scanf("%d", &kon);
    printf("Vad �r ditt personnummer? ");
    scanf("%lld", &pers);

    pers = pers / 10;

    if (pers % 2 == 0 && kon == 1 || pers % 2 != 0 && kon == 0 )
        printf("Det st�mmer!");
    else
        printf("Det st�mmer inte!");






    return 0;

}
