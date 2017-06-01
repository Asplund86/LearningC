#include <stdio.h>
#include <string.h>

#define N 100

char findChar(const char *from, char *to){
    char result[N];
    char *p = result;
    while(*from != NULL){
        if(*from++ == *to++)
            *p++ = *to;
    }

}

int main() {
    strpbrk()
    )
}


