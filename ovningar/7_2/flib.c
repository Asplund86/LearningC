#include <stdio.h>
#include "flib.h"

void new_lines(int x)
{
	for(int r; r<=x; r++){
		printf("\n");
	}
}

double double_read(void)
{
	double x;
	scanf("%lf", &x);
	return x;
}

int int_read(void)
{
	int x;
	scanf("%d", &x);
	return x;
}
