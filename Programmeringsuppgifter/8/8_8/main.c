#include <stdio.h>

#define N 50

int main()
{
	int primtal[N];
	
	int tal = 1;

	_Bool arPrimtal;

	int antal = 0;

	while(antal < N)
	{
		tal++;
		arPrimtal = 1;
		for(int i = 0; i < antal && arPrimtal; i++)
			if(tal % primtal[i] == 0)
				arPrimtal = 0;
		if(arPrimtal)
			primtal[antal++] = tal;
			
	}	

	for(int i= 0; i<N; i++)
		printf("%d\n", primtal[i]);
}
