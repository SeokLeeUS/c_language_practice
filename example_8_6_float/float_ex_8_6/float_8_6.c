#include <stdio.h>

int main()
{
	float num1 = 1.97f;
	long double num2 = 5.524218l;
	double num3 = 3792.8e+4;

	printf("%f %Lf %f\n", num1, num2, num3);

	double num4 = 0.4284;
	float num5 = 2.7f;

	printf("num4: %d, num5: %d", sizeof(num4), sizeof(num5));
	
	return 0;
}