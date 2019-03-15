#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 30);
	char s2[30];
	char s3[30];
	char s4[30];

	scanf("%s%s%s%s", s1, s2, s3, s4);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);

	return 0;
}

