#include <stdio.h>

double medelv(double a[], int antal)
{
	int medelv = 0;

	for(int i = 0; i < antal; i++)
	{
		medelv += a[i];
	}
	return medelv / antal;
}

int main()
{
	double pris[100];
	int kort = 0;

	while(kort<100)
	{
		printf("Pris/min för kort nr %d?: ", kort +1);
		if(scanf("%lf", &pris[kort]) != 1)
			break;
		kort++;
	}

	int billigast = 0;
	for(int i = 1; i < kort; i++)
	{
		if(pris[i]<pris[billigast])
			pris[billigast] = pris[i];
	}

	printf("\nKort nr %d är billigast\n", billigast + 1);
	printf("Kostnad: %4.2lf kr/min", pris[billigast]);

	double h = medelv(pris, kort);
	printf("Medelvärdet är %.2f", h);

}