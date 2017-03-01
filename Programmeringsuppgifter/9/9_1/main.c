#include <stdio.h>
#include <wctype.h>
#include <wchar.h>
#include <locale.h>

void backwards(wchar_t *to, const wchar_t *from){
    setlocale(LC_ALL, "sv_SE.UTF-8");

    int j = wcslen(from) - 1;
    int i = 0;
    for(; i <= wcslen(from) - 1; i++){
        to[i] = from[j];
        j--;
    }

    to[i] = '\0';
}


int main(){



    setlocale(LC_ALL, "sv_SE.UTF-8");

    wchar_t str[100]; 
    wchar_t strback[100];
    wchar_t test[100] = L"Hej pa dig!";

    printf("Vänligen skriv en mening: ");
    fgetws(str, 100, stdin);
    printf("%zu\n", wcslen(str));
    printf("%zu\n", wcslen(test));

    backwards(strback, str);



    printf("Baklänges blir det: %ls\n", strback);

}