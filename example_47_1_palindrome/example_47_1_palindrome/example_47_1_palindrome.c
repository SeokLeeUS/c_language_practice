#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char s1[10];
	scanf("%s", s1);
	printf("%s\n", s1);

	int str_len =  strlen(s1);
	bool str_palindrome = true;
	/*printf("%d\n", str_len);
	printf("%d\n", str_palindrome);*/

	for (int i = 0; i < str_len / 2; i++)
	{
		if (s1[i] != s1[str_len - 1 - i])
			str_palindrome = false;
	}

	printf("%d\n", str_palindrome);

	return 0;
}