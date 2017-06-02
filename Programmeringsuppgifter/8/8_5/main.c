#include <stdio.h>

double sum(double array[], int size){

	double sum = 0.0;

	for(int i = 0; i<size; i++){
		sum = sum + array[i];

	}

	return sum;
}

double kvad_sum(double array[], int size){

	double sum = 0.0;

	for(int i = 0; i<size; i++){

		sum = sum + (array[i] * array[i]);
	}

	return sum;
}