#include "nfak.h"

double nfak(double x)
{
	int res = 1;
	for(int r = 2; r<=x; r++)
	{
		res = res * r;
	}
	return res;
}