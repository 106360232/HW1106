#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input, output;
	printf("�п�J�@�Ӧr��:");
	scanf("%c", &input);
	if (input < 91)
	{
		output = input + 32;
		printf("%c���p�g��%c", input, output);
	}
	else
	{
		output = input - 32;
		printf("%c���j�g��%c", input, output);
	}
	system("pause");
	return 0;
}