#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fakultet(int x)
{	
	int res = 1;
	for(int r = 2; r<=x; r++)
	{
		res = res * r;
	}

	return res;
}

int upphojt(int tal, int y)
{
	for(y = 1; y <= tal; y++)
		tal *= tal;	

	return tal;
}

int mac(x)
{
	const double eps = 1.0e-7;
	double res = 1;
	for(int r = 1; r<=x; r++)
	{
		res = res + upphojt(x, r) / fakultet(r);
		if(fabs(res) <= eps)
			return 0;
			break;
	}
	return res;
}

int main()
{
	printf("x? ");
	int tal;
	scanf("%d", &tal);

	double res = mac(tal);

	printf("%.2f\n", res);
}