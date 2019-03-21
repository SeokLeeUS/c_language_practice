#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int num1, num2,num3,num4,num5,num6;
	
	scanf_s("%d", &num1);
	num2 = num1 % 10;
	num3 = (num1 / 10) % 10;
	num4 = (num1 / 100) % 10;
	num5 = (num1 / 1000) % 10;
	num6 = (num1 / 10000) % 10;
	printf("%d %d %d %d %d", num2, num3, num4, num5, num6);
	return 0;
}