#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char s[100];
    char a[]= "  /  /  ";
    printf("Ange datum ÅÅÅÅ-MM-DD: ");
    scanf("%s", s);
    a[0]=s[5]; a[1]=s[6]; //Månad
    a[3]=s[8]; a[4]=s[9]; //Dag
    a[6]=s[2]; a[7]=s[3]; //År


printf("I amerika skriver dem: %s\n", a);
}