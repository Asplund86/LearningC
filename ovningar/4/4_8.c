/* Skriv ett program med två st for satser en inre och en yttre.
Be användare om antal rader. Och på varje rad antal + = rader. Dessa
skall minska till en på den sista raden */

#include <stdio.h>

int main(){

  printf("Ange hur många rader du vill skriva: ");
  int n;
  scanf("%d", &n);

  
    for(int i = 0; i <= n; i++){
      for(int j = n; j >= i ; j--){
        printf("?");
      }
      printf("\n");
    }


  return 0;


}
