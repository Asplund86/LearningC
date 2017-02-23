#include <stdio.h>

_Bool ar_sorterat(double array[], int cols){
	
	for(int i = 1; i < cols; i++){
		if(array[i] < array[i - 1])
			return 0;
	}
	return 1;
}

int main(){

	double array[1000];
	int nr = 0;

	while(nr<1000){

		if(!ar_sorterat(array, nr)){
			printf("Ej sorterat! Tar bort sista inlägget!\n");
			break;
		}

		printf("Ange ett värde: ");
		if(scanf("%lf", &array[nr]) != 1){
			break;
		}

		

		nr++;
	}

	for(int i = 0; i < nr-1; i++){
		printf("%.1f\t", array[i]);
	}
	
}

// #include <stdio.h>

// _Bool ar_sorterat(double f[], int antal) {
//   for (int i=1; i < antal; i++)
//     if (f[i] < f[i-1])
//       return 0;
//   return 1;
// }

// int main() {
//   double a[1000];
//   int n = 0;
//   while (scanf("%lf", &a[n]) == 1)
//     n++;  
//   if (ar_sorterat(a, n))
//     printf("Fältet är sorterat");
//   else
//     printf("Fältet är inte sorterat");
// }  
    
      
    
