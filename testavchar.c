#include <stdio.h>
#include <wctype.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    
    wchar_t i = L'Ä';

    printf("%lc\n", i);
    

}