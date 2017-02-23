#include <stdio.h>


void fillArray(double f[], int low, int high, double value)
{
	for(int i = low - 1; i < high; i++)
	{
		f[i] = value;
	}

}

void writeArray(double f[], int e)
{
	for(int i = 0; i < e; i++)
	{
		printf("%.2f\n", f[i]);
	}
}

int main()
{
	printf("Hur många element i array?: ");
	int element;
	scanf("%d", &element);

	double arrayOne[element];

	printf("Använd fillArray(array, lägsta, högsta, värde): ");
	int low = 0;
	int high = 0;
	double value = 0.0;
	scanf("%d%d%lf", &low, &high, &value);

	fillArray(arrayOne, low, high, value);

	writeArray(arrayOne, sizeof arrayOne / sizeof arrayOne[0]);


}