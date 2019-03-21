#include <stdio.h>
int main()
{
	unsigned char num1 = 1;
	printf("%u\n", num1 << 1);
	printf("%u\n", num1 << 2);
	printf("%u\n", num1 << 3);
	printf("%u\n", num1 << 4);
	printf("%u\n", num1 << 5);


	unsigned char num3 = 240;
	unsigned char num4 = 15;
	num3 <<= 2;
	num4 >>= 2;

	printf("%u\n", num3);
	printf("%u\n", num4);
	return 0;
}