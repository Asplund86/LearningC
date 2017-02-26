#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char s[11];
    char a[] = "  /  /  ";
    printf("Ange datum i svenskt format ÅÅÅÅ-MM-DD: ");
    scanf("%s", s);
    strncpy(a, s+5, 2); // Månad
    strncpy(a+3, s+8, 2); // Dag
    strncpy(a+6, s+2, 2); // År

    printf("I amerika skriver dem: %s\n", a);
}