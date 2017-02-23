#include <stdio.h>

void copyArray(double arrayOne[], double arrayTwo[], int size){
	for(int i = 0; i<size; i++){
		arrayOne[i] = arrayTwo[i];
	}
}