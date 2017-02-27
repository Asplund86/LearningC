#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>
#include <ctype.h>

void replace(wchar_t *to, const wchar_t *from, wchar_t old, wchar_t new){
    setlocale(LC_ALL, "sv_SE.UTF-8");

    int i = 0;

    for(; from[i] != '\0'; i++){
        if(from[i] == old)
            to[i] = new;
        else
            to[i] = towlower(from[i]);
    }
    to[i] = '\0';
}


int main(){

    setlocale(LC_ALL, "sv_SE.UTF-8");

    wchar_t djurett[20];
    wchar_t djurtva[20];
    wchar_t nrold;
    wchar_t nrnew;


    printf("Vänligen ange djur nr ett: ");
    scanf("%ls", djurett);

    printf("Vänligen ange djur nr två: ");
    scanf("%ls", djurtva);

    printf("Vilken bokstav ska ersättas? ");
    scanf(" %lc", &nrold);

    printf("Med vilken bokstav? ");
    scanf(" %lc", &nrnew);

    printf("Nu ska %ls ersättas med %ls och bokstav \"%lc\" ska ersättas med bokstav \"%lc\"\n", djurett, djurtva, nrold, nrnew);

    replace(djurett, djurtva, nrold, nrnew);

    printf("Slutresultat: %ls\n", djurett);

}