#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;

	float num4 = 1.0f;
	float num5 = 0.0f;
	float num6;
	num1 = 2 * 3;
	num2 = 7 / 2;

	printf("%d\n", num1);
	printf("%d\n", num2);


	/*num3 = 1 / 0;
	printf("%d\n", num3);
	*/

	num6 = num4 / num5;

	printf("%f\n", num6);


	int num7 = 2;
	int num8 = 7;

	num7 *= 3;
	num8 /= 2;

	printf("%d\n%d\n", num7, num8);

	return 0;
}