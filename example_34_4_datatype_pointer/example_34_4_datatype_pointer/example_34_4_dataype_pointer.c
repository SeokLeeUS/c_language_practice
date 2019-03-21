#include <stdio.h>
int main()
{
	long long *numPtr1;
	float *numPtr2;
	char *cPtr1;

	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);
	printf("%f\n", *numPtr2);
	printf("%c\n", *cPtr1);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(int));


	const int num1 = 10;
	const int *constPtr1;

	constPtr1 = &num1;
	*constPtr1 = 20;
	return 0;
}