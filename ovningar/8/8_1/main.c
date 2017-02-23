#include <stdio.h>
#include <stdlib.h>

int main()
{
	double faltEtt[] = {0, 0, 0, 0};
	double faltTva[] = {5, 10, 20, 50, 100, 200, 500} ;

	int faltEtt_size = sizeof faltEtt/ sizeof faltEtt[0];
	int faltTva_size = sizeof faltTva/ sizeof faltTva[0];

	for(int i=0; i < faltEtt_size; i++)
		printf("%.0f\n", faltEtt[i]);

	for(int i=0; i < faltTva_size; i++)
		printf("%.0f\n", faltTva[i]);

	printf("%d %d\n", faltEtt_size, faltTva_size);

	int size = sizeof faltTva/sizeof faltTva[0];

	printf("%d", size);
}