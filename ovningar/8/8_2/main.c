#include <stdio.h>

int main()
{
	double array[10];

	for(int i=0; i<10; i++)
		array[i] = 1.0/(i+1);

	for(int i=0; i<10; i++)
		printf("10%f\n", array[i]);
}