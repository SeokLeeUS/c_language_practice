#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	printf("input:");
	scanf("%d", &num1);
	printf("num1= %d\n", num1);
	
	int num2, num3;
	printf("two inputs:");
	scanf("%d %d", &num2, &num3);
	printf("%d %d\n", num2, num3);
	printf(num2, num3);

	return 0;
	
	/*return 0*/;
}