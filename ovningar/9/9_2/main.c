#include <stdio.h>

int main(){

    int counter = 0;
    int c;

    printf("Skriv något: ");

    while((c = getchar()) != EOF){
        counter++;
    }
    printf("Du skrev %d tecken.", counter - 1);
}