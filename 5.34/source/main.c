#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int c(int base, int exponent);

int main()
{
	int base, exponent;
	int a;
	printf("Input base and exponent:");
	scanf("%d %d", &base, &exponent);
	a = c(base,exponent);
	printf("%d^%d=%d", base, exponent, a);
	system("pause");
	return 0;
}
 int c(int base, int exponent)
{
	int x;
	if (exponent == 0)
	{
		return 1;
	}
	else if(exponent == 1)
	{
		return base;
	}
	else if (exponent > 1)
	{
		return(base*c(base,exponent-1));
	}
	return 0;
}
