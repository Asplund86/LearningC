#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

double maxuttag(int vinst, int ranta, int uttag){


	int ar;
	int dagar;
	if (vinst * (ranta/100) >= uttag)
	{
		return INT_MAX;
	}
	else
	{

		while(vinst > 0)
		{
			ranta = vinst * (ranta/100);
			vinst += ranta;
			vinst -= uttag;

			ar++;
		}
		return ar;

	}

	
}

int main(){

	system("chcp 65001");

	printf("Hur mycket var vinsten? ");
	int vinst;
	scanf("%d", &vinst);

	printf("Hur ser räntan ut? ");
	int ranta;
	scanf("%d", &ranta);

	printf("Hur mycket planerar du på att ta ut per år? ");
	int uttag;
	scanf("%d", &uttag);

	int tid = maxuttag(vinst, ranta, uttag);

	if(tid == INT_MAX)
		printf("Oändligt!");
	else
		printf("Det räcker i %.1f år\n", maxuttag(vinst, ranta, uttag));

}

