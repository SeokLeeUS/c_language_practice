#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float f1 = 0.35456f;
	char s1[10];
	char s2[20];
	sprintf(s1, "%f", f1);
	sprintf(s2, "%e", f1); /*https://en.wikipedia.org/wiki/Printf_format_string */
	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}