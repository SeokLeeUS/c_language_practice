#include <stdio.h>
int main()
{
	int num1 = 5;
	if (num1 == 10)
	{
		printf("it's %d.\n", num1);
		printf("it's 10.\n");
	}

	float num2 = 0.1f;
	char c1 = 'a';

	if (num2 == 0.1f)
		printf("a\n");

	if (c1 == 'a')
		printf("b\n");

	if (c1 == 97) /* it can compare with ASCII code*/
		printf("c\n");

	return 0;
}