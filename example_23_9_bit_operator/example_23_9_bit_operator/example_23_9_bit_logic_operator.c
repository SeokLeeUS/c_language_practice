#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	unsigned long long num1;
	scanf("%llu", &num1);
	num1 <<= 20;
	num1 >>= 4;
	printf("%llu\n", num1);
	return 0;
}