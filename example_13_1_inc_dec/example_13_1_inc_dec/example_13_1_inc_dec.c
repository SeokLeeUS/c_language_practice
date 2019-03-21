#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 1;
	int num2 = 2;
	num1++;
	num2--;
	printf("%d\n", num1);
	printf("%d\n", num2);
	/*return 0;*/

	float num3 = 2.1f;
	float num4 = 3.1f;

	num3++;
	num4--;

	char c1 = 'b';
	char c2 = 'c';

	c1++;
	c2--;

	printf("%f %f\n", num4, num3);
	printf("%c %c\n", c1, c2);

	int num5 = 2;
	int num6 = 2;

	printf("%d %d\n", ++num5, ++num6);
	printf("%d %d\n", --num5, --num6);

	int num7;
	float num8;
	char c3;

	scanf("%d%f%c", &num7, &num8, &c3);

	num7++;
	num8++;
	c1--;

	printf("%d%f%c", num7, num8, c1);



}