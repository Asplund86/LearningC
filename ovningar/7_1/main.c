#include <stdio.h>
#include "nfak.h"



int main()
{
	printf("Tal? ");
	double tal;
	scanf("%lf", &tal);

	tal = nfak(tal);

	printf("%.2f", tal);
}