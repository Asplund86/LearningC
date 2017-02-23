#include <stdio.h>

_Bool my_memcp(double arrayOne[], double arrayTwo[], int size){
	for(int i = 0; i<size / sizeof arrayOne[0]){
		if(arrayOne[i] != arrayTwo[i])
			return 0;

	}
	return 1;
}