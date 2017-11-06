#include <stdio.h>
#include <stdlib.h>

int num1, num2;
int lcm(int num1, int num2);

int main(void)
{
	int d;
	printf("請輸入兩數:");
	scanf("%d %d", &num1, &num2);
	d = lcm(num1, num2);
	printf("兩數之最小公倍數為:%d", d);

	system("pause");
	return 0;
}
int lcm(int num1, int num2)
{
	int a, b, c=1,x=0;
	while (c!=0)
	{
		x++;
		a = x%num1;
		b = x%num2;
		c = a + b;
		
	}
	return x;
}