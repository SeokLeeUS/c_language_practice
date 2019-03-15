#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool b1 = true;
	if (b1 == true)
		printf("true\n");
	else
		printf("false\n");


	printf("size of boolean:%d\n", sizeof(bool));
	printf("size of integer:%d\n", sizeof(int));
	printf("%d\n", true && false);
	printf("%d\n", false && true);

	printf(b1 ? "true" : "false");
	printf("\n");


	unsigned char num1 = 1;
	unsigned char num2 = 3;

	printf("%d\n", num1&num2);
	printf("%d\n", num1 | num2);
	printf("%d\n", num1^num2); 

	unsigned char num1 = 162;
	unsigned char num2;

	num2 = ~num1;
	printf("%d\n", num2);

	return 0;
}