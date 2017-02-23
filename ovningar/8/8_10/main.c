#include <stdio.h>

void skriv_ut(int array[][5], int rows){
	for(int i = 0; i<rows; i++){
		for(int j = 0; j<5; j++){
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}

}

void array_change(int array[][5], int rows){
	for(int i=0; i<rows; i++){
		for(int j=0; j<5; j++){
			array[i][j]= i+j;
		}
	}
}

int main(){
	int a[10][5];

	array_change(a, 10);
	skriv_ut(a, 10);

}