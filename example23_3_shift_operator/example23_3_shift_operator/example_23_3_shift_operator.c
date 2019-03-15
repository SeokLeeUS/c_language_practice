#include<stdio.h>
int main()
{
	unsigned char num1 = 3;
	unsigned char num2 = 24;

	printf("%u\n", num1 << 3);
	printf("%u\n", num2 << 2);


	unsigned char num3 = 4;
	unsigned char num4 = 5;
	num3 &= 5;
	num4 <<= 2;



	return 0;
}

