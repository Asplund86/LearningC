#include <stdio.h>

/*void count_lines(void){
    int i;
    if((i = getchar()) == '\n')

}*/

int main(){
    
    printf("Skriv något: ");

    int counter = 0;
    int c;

    while( (c = getchar()) != EOF ){
        if( c == '\n' )
            counter++;
    }
    printf("Du skrev %d rader.", counter);
}