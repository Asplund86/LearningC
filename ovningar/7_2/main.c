#include <stdio.h>
#include "flib.h"

int main()
{
	double d;
	int i;

	printf("Ange en double variabel");
	d = double_read();


	printf("Ange en int variabel, ange hur många new_lines? ");
	i = int_read();

	new_lines(i);

	printf("%d och %f\n", i, d);
}