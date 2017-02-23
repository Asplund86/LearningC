#include <stdio.h>
#include "kolapp.h"

int main()
{
	while(1)
	{
		printf("Skriv 1 om du är kund, 0 annars: ");
		int kund;
		if(scanf("%d", &kund) != 1)
			break;

		if(kund)
		{
			printf("Du har nr: %d\n", ta_lapp());
			printf("Nu betjänas nr: %d\n", betjanas());
		}
		else
		{
			int nr = betjana_kund();
			if(nr > 0)
				printf("Betjäna nr: %d\n", nr);
			else
				printf("Inga kunder i kön!\n");
		}

		printf("Ny dag i butiken? 1 ja, 0 nej: ");
		int avslut;
		if(scanf("%d", &avslut) != 1)
			break;
		if(avslut)
			init();

	}
}