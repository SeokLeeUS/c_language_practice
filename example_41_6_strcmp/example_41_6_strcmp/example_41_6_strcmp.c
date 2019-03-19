#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *c1 = malloc(sizeof(char) * 30);
	char *c2 = malloc(sizeof(char) * 30);
	scanf("%s%s", c1, c2);
	int r = strcmp(c1, c2);
	printf("%d\n", r);

	return 0;
}