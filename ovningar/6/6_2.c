/*Skriv ett program med en funktion som heter fnak.
Den funktionen ska beräkna fackulteten för n och returnera n.
I main skall sedan n läsas in och resultatet skrivas ut.*/

#include <stdio.h>
#include <stdlib.h>

double fnak(int n){
  if(n < 0)
    printf("Error i funktion fnak");
  else{
    double res = 1;
    for(int i = 2; i<=n; i++){
      res = res * i;
    }
    return res;
  }
}


int main(){
  system("chcp 65001");

  printf("Ange värde: ");
  int v;
  if(scanf("%d", &v) != 1)
    printf("Ange ett värde!\n");

  double resultat = fnak(v);

  printf("Fackulteten för värde %d är %.2f.\n", v, resultat);
}
