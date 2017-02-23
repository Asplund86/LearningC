#include <stdio.h>

int main()
{
	int a[100];
	for(int i = 0; i<100; i++)
		a[i] = i + 1;

	int b[20];
	for(int i = 0; i<20; i++)
		b[i] = 0;

	for(int i = 1; i<=5; i++)
	{
		b[8+i]=a[48+i];
		b[3+i]=a[93+i];
	} 

	int b_size = sizeof b / sizeof b[0];

	for(int i = 0; i<b_size; i++)
		printf("%d\n", b[i]);
}