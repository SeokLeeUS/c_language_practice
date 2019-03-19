#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *c1 = "hello";
	char *c2 = malloc(sizeof(char) * 10);
	strcpy(c2, c1);
	printf("%s\n", c2);

	free(c2);

	char *c3 = "world";
	char *c4 = malloc(sizeof(char) * 30);
	strcpy(c4, "hello"); 
	strcat(c4, c3);
	printf("%s\n", c4);


	return 0;
}