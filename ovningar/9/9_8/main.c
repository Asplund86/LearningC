#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wctype.h>
#include <wchar.h>

int index_of_backwards(const wchar_t *s, wchar_t c){
    wchar_t *i = wcsrchr(s, c);
    if(i == NULL)
        return -1;
    else
        return i-s;
}

int main(){ 

    setlocale(LC_ALL, "");
    

    wchar_t string[] = L"Hejsan på dig!";
    wchar_t a;

    printf("Vilken bokstavs index i \"%ls\" vill du veta?", string);
    scanf("%lc",  &a);

    int index = index_of_backwards(string, a);

    printf("Tecknet %lc finns på index %d\n.", a, index);






}