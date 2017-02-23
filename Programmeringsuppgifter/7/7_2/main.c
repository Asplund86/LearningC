#include <stdio.h>

int fib(void)
{
	static int a = 0, b = 1;
	int c = a + b;
	a = b;
	b = c; 
	return c;
}


int main()
{
	for(int i = 1; i<=20; i++)
	{
		printf("%d\n", fib());
	}
}