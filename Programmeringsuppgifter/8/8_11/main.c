#include <stdio.h>


// Funktion som kollar om alla element är 1. Används till 
// kontrollarray

_Bool uniqueinnine(int array[]){ 
	
	for(int i = 0; i < 9; i++){
		if(array[i] != 1)
			return 0;
	}
	return 1;
}

// Funktione som återställer alla element i en array till 0.

void reset(int array[]){
	for(int i = 0; i < 9; i++)
		array[i] = 0;
}



_Bool korrektSoduko(int array[][9]){ // Huvudfunktion.

	int kontrollarray[9]; //En array där elementen är 1 om
	//siffran är unik. 
	

	//Kontrollera alla rader.

	for(int i = 0; i < 9; i++){
		reset(kontrollarray);
		for(int j = 0; j < 9; j++){
			int k = array[i][j];
			if(k>=1 && k<=9)
				kontrollarray[k-1] += 1;
		}
		if(!uniqueinnine(kontrollarray))
			// printf("1\n");
			return 0;
	}

	//Kontrollera alla kolumner.

	for(int i = 0; i < 9; i++){
		reset(kontrollarray);
		for(int j = 0; j < 9; j++){
			int k = array[j][i];
			if(k>=1 && k<=9)
				kontrollarray[k-1] += 1;
		}
		if(!uniqueinnine(kontrollarray))
			// printf("2\n");

			return 0;
	}


	//Kontrollera varje 3X3 zon.

	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			// Nestlad for loops där man tar X 3 för att 
			// göra varje hopp. 
			reset(kontrollarray);
			for(int i = x*3; i <(x+1)*3; i++){
				for(int j = y*3; j < (y+1)*3; j++){
					int k = array[i][j];
					if(k>=1 && k<=9)
						kontrollarray[k-1] += 1;
				}

				// if(!uniqueinnine(kontrollarray))
				// 	return 0;
			}
			if(!uniqueinnine(kontrollarray))
				// printf("3\n");
				return 0;
		}
	}

	return 1;

}







int main(){

	int a[9][9]= {
	{4, 8, 3, 9, 2, 1, 6, 5, 7},
	{9, 6, 7, 3, 4, 5, 8, 2, 1},
	{2, 5, 1, 8, 7, 6, 4, 9, 3},
	{5, 4, 8, 1, 3, 2, 9, 7, 6},
	{7, 2, 9, 5, 6, 4, 1, 3, 8},
	{1, 3, 6, 7, 9, 8, 2, 4, 5},
	{3, 7, 2, 6, 8, 9, 5, 1, 4},
	{8, 1, 4, 2, 5, 3, 7, 6, 9},
	{6, 9, 5, 4, 1, 7, 3, 8, 2}};

	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("%d\n", korrektSoduko(a));

	


	if(korrektSoduko(a))
		printf("Sant\n");
	else
		printf("Ej sant\n");


	
}