#include <stdio.h>

int main()
{
	double array[10];
	int r = 1;

	for(int i = 9; i>=0; i--)
	{
		array[i] = 1.0/(r);
		r++;
	}

	for(int i = 0; i<10; i++)
		printf("%10f\n", array[i]);


}