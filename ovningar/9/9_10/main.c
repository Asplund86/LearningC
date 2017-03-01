#include <stdio.h>
#include <string.h>
#include <wctype.h>
#include <wchar.h>


void remove_white(wchar_t *to, constant wchar_t *from){
    
    int i = 0; int j = strlen(from)-1;//Initierar räknare.
    
    while(iswspace(from[i])){ // Första while-loopen går igenom från början av "from" tills tecken finns.
        i++;
    }

    while(iswspace(from[j]) && j >= 0){ // Andra loopen går igenom från slutet av "from" tills tecken finns.
        j--;
    }

    if(j >= i){
        strcpy()
    }
}