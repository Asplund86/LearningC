#include <stdio.h>
#include <string.h>
#include <wctype.h>
#include <wchar.h>


/*void remove_white(wchar_t *to, const wchar_t *from){
    
    int i = 0; int j = wcslen(from)-1;//Initierar räknare.
    
    while(iswspace(from[i])){ // Första while-loopen går igenom från början av "from" tills tecken finns.
        i++;
    }

    while(iswspace(from[j]) && j >= 0){ // Andra loopen går igenom från slutet av "from" tills tecken finns.
        j--;
    }

    if(j >= i){ // En if sats som bara skriver om j är större än i.
        wcpncpy(to, from+i, j-i+1); // kopierar alla tecken till to. Utan vita tecken.
    }
    to[j+1] = '\0'; // Lägger till ett nolltecken på slutet.
}
*/

void remove_white(wchar_t *to, const wchar_t *from){
    int j = 0;
    for(int i = 0; from[i] != '\0'; i++){
        if(!iswspace(from[i]))
            to[j++] = from[i];
    
    }
    to[j] = '\0'; 
}


int main(){
    wchar_t djur[20];
    wchar_t trim[20];

    printf("Vänligen skriv \"mellanslag\" \"ett djur\" och \"mellanslag\" igen: ");
    scanf("%ls", djur);

   remove_white(trim, djur);

    printf("Nu har alla vita tecken från \"%ls\" tagits bort i en\nmer trimmad version \"%ls\"\n", djur, trim);

    printf("Längden på djur är: %zu\n", wcslen(djur));
    printf("Längden på trim är: %zu\n", wcslen(trim));
}