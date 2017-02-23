#include <stdio.h>

int main() {

  int n;
  int antal = 0;
  printf("Ange ett heltal: ");
  if(scanf("%d", &n) != 1){
    printf("Inget värde!\n");
  }

  for(int k=1; k<=n; k++){

    _Bool ar_primtal = 1;

    for(int i = 2; i < k; i++)

      if(k % i == 0)
        ar_primtal = 0;

      if(ar_primtal){
        antal++;
        printf("%d ", k);

        if(antal % 10 == 0)
          printf("\n");

      }




  }




}
