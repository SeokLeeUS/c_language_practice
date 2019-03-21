#include <stdio.h>
int main()
{
	int num1 = 10;
	printf("%d\n", num1 == 10);

	int num2;

	num2 = num1 == 10 ? 100 : 200;

	printf("%d\n", num2);


	printf("%s\n", num1 == 10 ? "it is 10" : "it is not 10");

	return 0;
}
