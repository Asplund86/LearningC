#include <stdio.h>
#include <stdlib.h>
#include "area.h"

int main()
{
	system("chcp 65001");

	while(1)
	{
		printf("Vad vill du beräkna?\nCirkel = 1, Rektangel = 2, Triangel = 3: ");
		int val = 0;
		if(scanf("%d", &val) != 1)
			printf("Ange ett värde!\n");

		if(val == 1)
		{
			printf("Ange Cirkelns radie: ");
			double radie = 0;
			if(scanf("%lf", &radie) != 1)
				printf("Ange ett värde!\n");

			printf("Cirkelns area är: %.2lfm2\n", cirkel(radie));
		}
		else if(val == 2)
		{
			printf("Ange rektangelns bas och höjd: ");
			double bas = 0;
			double hojd = 0;
			if(scanf("%lf%lf", &bas, &hojd) != 2)
				printf("Ange ett värde!\n");

			printf("Rektangelns area är: %.2lfm2\n", rektangel(bas, hojd));

		}
		else if(val == 3)
		{
			printf("Ange triangels bas och höjd: ");
			double bas = 0;
			double hojd = 0;
			if(scanf("%lf%lf", &bas, &hojd) != 2)
				printf("Ange ett värde!\n");
			printf("Triangelns area är: %.2lfm2\n", triangel(bas, hojd));
		}
		else
			printf("Vänligen ange 1, 2 eller 3!\n");

	}
}