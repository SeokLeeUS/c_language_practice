#include <stdio.h>
int main()

{
	unsigned char num1 = 1;
	unsigned char num2 = 5;

	printf("%d\n", num1 | num2);
	printf("%u\n", num1^num2);
	printf("%u\n", num1&num2);
	num1 = ~ num2;
	printf("%u\n", num1);
	unsigned char num4 = 32;
	unsigned char num5;
	num5 = num4 >> 4 << 1;
	printf("%u\n", num5);
	return 0;
}