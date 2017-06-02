#include <stdio.h>
#include <string.h>

#define N 100

char *findChar(char *source, char *text){
    char *s1, *s2;
    for(s1 = source; *s1; s1++){
        for(s2 = text; *s2;){
            if(*s1 == *s2++)
                return s1;
        }
    }

    return NULL;

}

int main() {
        char name[N], text[N];
    printf("Skriv två ord\n");
    scanf("%s%s", name, text);
    char *r = findChar(name, text);
    if(r != NULL){
        int i = r-name;
        printf("%d", i);
    }
    else
        printf("Finns inte!");
}


