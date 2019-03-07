#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *s1 = "97.527824";
	float num1;
	float *end;
	num1 = strtof(s1,&end);
	printf("%f\n", num1);
	float num2;
	num2 = atof(s1);
	printf("%f\n", num2);

	return 0;
}