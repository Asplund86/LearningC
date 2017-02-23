#include <stdio.h>
#include <limits.h>

int main()
{
	int kort = 1;
	double pris = 0;
	double billigaste_pris = INT_MAX;
	int billigaste_kort = INT_MAX;

	while(1)
	{	
		
		printf("Pris/min för kort nr %d: ", kort);
		if(scanf("%lf", &pris) != 1)
			break;
		if(pris < billigaste_pris)
		{
			billigaste_pris = pris;
			billigaste_kort = kort;
		}

		kort++;

	}

	printf("\nBilligaste kort är nr: %d\n", billigaste_kort);
	printf("Kostnad: %4.2f kr/min\n\n", billigaste_pris);

}