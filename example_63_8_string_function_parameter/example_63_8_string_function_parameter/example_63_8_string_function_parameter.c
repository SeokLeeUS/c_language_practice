#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compareString(char str1, char str2)
{
	int int1 = strcmp(str1, str2);
	if (int1 == 0)
		printf("equal\n");
	else
		printf("not equal\n");
}


int main()
{
	char *s1 = malloc(sizeof(char) * 10);
	strcpy(s1, "Venus");
	compareString(s1, "Venus");
	free(s1);
	
	return 0;
}