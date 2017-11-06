#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input, output;
	printf("請輸入一個字母:");
	scanf("%c", &input);
	if (input < 91)
	{
		output = input + 32;
		printf("%c的小寫為%c", input, output);
	}
	else
	{
		output = input - 32;
		printf("%c的大寫為%c", input, output);
	}
	system("pause");
	return 0;
}