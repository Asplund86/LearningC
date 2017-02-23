// Skriv en funktion för binominalkoeffecienten.

#include <stdio.h>
#include <stdlib.h>

// Funktion för fackultet

double fnak(int x){
	double res = 1;
	for(int i = 2; i <= x; i++)
		res = res * i;
	return res;
}

// Funktion för binominalkoeffecienten

double bio(int n, int k){
	double ni=fnak(n);
	double ki=fnak(k);
	double nki = fnak(n-k);

	return ni / (ki*nki);
}

int main() {

	system("chcp 65001");


	while(1){
	printf("Heltal nr1? ");
	int ett;
	scanf("%d", &ett);
	if (ett < 1){
		printf("Måste vara högre än 0 och ett heltal.\n");
		break;
	}

	printf("Heltal nr2? ");
	int tva;
	scanf("%d", &tva);
	if (tva < 1){
		printf("Måste vara högre än 0 och ett heltal.\n");
		break;
	}

	printf("Binominalkoeffecienten är %.1f\n", bio(ett, tva));
	}

}