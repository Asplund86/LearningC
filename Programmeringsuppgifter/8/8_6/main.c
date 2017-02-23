#include <stdio.h>

void rotate_array(double array[], int size)
{
	int counter = array[size -1];

	for(int i = size -1; i >= 1; i--)
	{
		array[i] = array[i-1];
	}

	array[0] = counter;
}

int main()
{
	double array[10];

	for(int i = 0; i < 10; i++)
		array[i] = i + 1;

	for(int i = 0; i < 10; i++)
		printf("%.1f\t", array[i]);

	printf("\n");
	rotate_array(array, 10);



	for(int i = 0; i < 10; i++)
		printf("%.1f\t", array[i]);


}