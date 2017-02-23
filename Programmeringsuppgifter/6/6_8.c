// Skriv en funktion för perfekt tal.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


_Bool perfekt(int x){
	int res;
	for(int r = 1; r<x; r++)
		if(x % r == 0)
			res += r;
	return x > 0 && res == x;
}

int main()
{
	system("chcp 65001");

	printf("Ange en siffra: ");
	int siffra;
	scanf("%d", &siffra);

	if (perfekt(siffra))
		printf("PERFEKT!\n");
	else
		printf("EJ PERFEKT!\n");
}