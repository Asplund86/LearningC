#include <stdio.h>

#define N 4

double pow(double x, double y){
	
	double sum = x;
	for(int i = 1; i <= y; i++){
		sum = sum * x;
	}
	return sum;
	
}

double col_sum(double f[][N], int rows_nr, int col){
	double sum;
	col = col - 1;
	
	for(int i = 0; i < (rows_nr); i++){
		sum = sum + f[i][col];
	}
	return sum;
}

int main(){
	double array[3][4];

	for(int i = 0; i < 4; i++){
		array[i][2] = 10 / (pow(10,i));
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			printf("%f\t", array[i][j]);
		}
		printf("\n");
	}

	printf("Summan av kolumn 3 = %.5f", col_sum(array, 5, 3));
}