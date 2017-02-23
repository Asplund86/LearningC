#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double newton(double x)
{
	const double eps = 1.0e-6;
	double g = x;
	double gny = x / 2;

	while(fabs(g-gny) > eps)
	{
		g = gny;
		gny = (g+x/g)/2;
	}
	return gny;
}

int main()
{
	double x;
	printf("x? ");
	scanf("%lf", &x);

	printf("Resultat: %e", newton(x));
}