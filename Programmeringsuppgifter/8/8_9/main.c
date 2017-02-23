#include <stdio.h>
#define COL 4

_Bool symmetriskt(int array[][COL], int row)
{
	
	for(int i = 0; i < COL; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			if(array[i][j] != array[j][i])
				return 0;
		}


	}
	return 1;
}

int main()
{
	int arr[4][4];

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	
	}


	if(symmetriskt(arr, 4))
		printf("Symme\n");
	else
		printf("Ej symmetriskt\n");

	printf("%d\n", symmetriskt(arr, 4));


	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}