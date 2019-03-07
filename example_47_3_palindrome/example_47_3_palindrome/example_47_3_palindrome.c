#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int num1;
	scanf("%d", &num1);
	printf("%d\n", num1);
	bool ispalindrome = true;
	char *s1 = malloc(sizeof(char)*30);
	sprintf(s1, "%d", num1);

	printf("%s\n", s1);

	int length = strlen(s1);

	for (int i = 0; i < length; i++)
		if (s1[i] != s1[length - 1-i])
			ispalindrome = false;

	printf("%d", ispalindrome);

	return 0;
}