#include <stdio.h>

void swapnumber(int *num1, int *num2)
{
	int temp;
	temp = *num2;
	*num2 = *num1;
	*num1 = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	swapnumber(&num1, &num2);

	printf("%d %d\n", num1, num2);

	return 0;
}