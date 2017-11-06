#include <stdio.h>
#include <stdlib.h>
unsigned int a, b;
unsigned long long int fibonacci(unsigned int a, unsigned int b);

int main()
{
	unsigned int x;
	x = fibonacci(a, b);
	printf("Fibonacci()=%u", x);

	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int a, unsigned int b)
{
	unsigned int c = 0, d = 1;
	while (c < 100)
	{
		c = c + d;
		d = c + d;
	}
	a = c;
	return a;
}