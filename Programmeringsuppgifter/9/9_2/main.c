#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

void remove_white(wchar_t *to, const wchar_t *from){
    int i = 0; int j = 0;
    for(; i < wcslen(from); i++){
        if(!iswspace(from[i]))
            to[j++] = from[i];
    }
   to[j] = '\0';
}

void backwards(wchar_t *to, const wchar_t *from){
    int i = 0; int j = wcslen(from)-1;

    for(; i<wcslen(from); i++, j--){
        to[i] = from[j];
    }
    to[i] = '\0';
}

void lowercase(wchar_t *to, const wchar_t *from){
    int i = 0; 
    for(; i < wcslen(from); i++){
       // if(!iswlower(from[i]))
            to[i] = towlower(from[i]);
    
    }
    to[i] = '\0';
}

_Bool anagram(wchar_t *array){
    wchar_t copynowhite[20];
    wchar_t copylow[20];
    wchar_t copycompare[20];

    remove_white(copynowhite, array);
    lowercase(copylow, copynowhite);
    backwards(copycompare, copylow);

    for(int i = 0; i < wcslen(copylow); i++){
        if(copylow[i] != copycompare[i])
            return 0;
    }
    return 1;
}

void anagramkontroll(wchar_t *array){
    wchar_t copynowhite[20];
    wchar_t copylow[20];
    wchar_t copycompare[20];

    remove_white(copynowhite, array);
    lowercase(copylow, copynowhite);
    backwards(copycompare, copylow);

   // for(int i = 0; i < wcslen(copylow); i++){
    //    if(copylow[i] != copycompare[i])
      //      return 0;
    //}

    printf("%ls\n", copycompare);
    printf("%ls\n", copylow);
    
}

int main(){

    setlocale(LC_ALL, "sv_SE.UTF-8");

    //Kontroll av varje funktion.

    wchar_t str[20] = L"   Hej på dig!";
    wchar_t strrw[20];
    wchar_t strbw[20];
    wchar_t strlc[20];

    remove_white(strrw, str);
    printf("%ls", strrw);
    printf("\n");

    backwards(strbw, str);
    printf("%ls\n", strbw);

    lowercase(strlc, str);
    printf("%ls\n", strlc);


    // Kontroll av anagram.

   wchar_t check[20] = L"Emil Asplund";

    if(anagram(check))
        printf("Anagram!!\n");
    else
        printf("Ej anagram!\n");


      anagramkontroll(check);



}