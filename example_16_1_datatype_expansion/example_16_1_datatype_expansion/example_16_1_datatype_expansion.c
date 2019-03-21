#include <stdio.h>
int main()
{
	int num1 = 11;
	float num2 = 4.4f;

	printf("%f\n", num1 + num2);
	printf("%f\n", num1 - num2);
	printf("%f\n", num1*num2);
	printf("%f\n", num1 / num2);

	long long num3 = 123456789000;
	int num4 = 10;

	printf("%lld\n", num3 + num4);

	int num5 = 22;
	float num6 = 4.2f;
	int num7 = num5 - num6;
	printf("%d", num7);

}