#include <stdio.h>
#include <string.h>

int main(){
    char person1[13];
    char person2[13];

    printf("Ange person1 födelsedag ÅÅÅÅ-MM-DD: ");
    scanf("%s", person1);
    printf("Ange person2 födelsedag ÅÅÅÅ-MM-DD: ");
    scanf("%s", person2);

    int svar = strncmp(person1+5, person2+5, 5);

    if(svar == 0)
        printf("Personerna fyller år samma dag!\n");
    else
        printf("Dem fyller inte år på samma dag!\n");
}