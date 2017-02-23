#include <stdio.h>

int main(){

	int array[1000];
	int nr = 0;
	while(scanf("%d", &array[nr]) == 1)
		nr++;

	printf("Talen är: \n");

	for(int i = 0; i<nr; i++){
		_Bool funnen = 0;
		for(int j = 0; j<i && !funnen; j++){
			if(array[i] == array[j])
				funnen = 1;
		}

		if(!funnen)
			printf("%d ", array[i]);
	}



}