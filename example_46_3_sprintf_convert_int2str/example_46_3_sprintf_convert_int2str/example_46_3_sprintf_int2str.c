#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[10];
	int num1 = 283;
	sprintf(s1, "%d", num1);
	printf("%s\n", s1);

	char s2[10];
	char s3[10];
	int num2 = 283;
	sprintf(s2, "0x%x", num2); /*16bit integer format specifier */
	sprintf(s3, "0x%X", num2);
	printf("%s\n", s2);
	printf("%s\n", s3);
	return 0;
}