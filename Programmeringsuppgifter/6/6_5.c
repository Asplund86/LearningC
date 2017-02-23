/* Skriv en funktion som får ett heltal mellan 1 - 10 och skriver ut
mulitplikationstabellen en uträkning per rad. */

#include <stdio.h>
#include <stdlib.h>

void mulitplikationstabellen(int x){

	for(int r = 1; r <= 10; r++){

	double i = r * x;
	printf("%.0d * %.0d = %.0f\n", x, r, i);
	}
}

int main(){

	system("chcp 65001");

	

	while(1){
	printf("Vilken mulitplikationstabell önskas? (1 - 10): ");
	
	int tal;

	scanf("%d", &tal);

	mulitplikationstabellen(tal);
	}

		
}