#include <stdio.h>
#include "weather_module.h"

int main()
{
	int t;
	int m;
	double tmp;

	while(1)
	{
		printf("Vill du rapportera in en temperatur? 1 ja 0 nej: ");
		int rapport;
		if (scanf("%d", &rapport) != 1)
		{
			break;	
		}

		if(rapport)
		{
			printf("Ange tidpunkt: tt:mm ");
			scanf("%d%d", &t, &m);

			printf("Ange temperatur: ");
			scanf("%lf", &tmp);

			if(!observation(t, m, tmp))
				printf("Rapporten misslyckades!\n");
		}
		else
			printf("Senaste loggning: Kl %02d:%02d Temperatur: %.1f\n", 
				obs_tim(), obs_min(), aktuell_temp());

	}
}