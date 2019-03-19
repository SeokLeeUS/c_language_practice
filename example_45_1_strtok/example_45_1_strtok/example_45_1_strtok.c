#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";
	char *ptr = strtok(s1, " ");
	while (ptr != NULL)
	{

		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}


	char *s2 = malloc(sizeof(char) * 30);
	strcpy(s2, "The Little Prince");
	char *ptr1 = strtok(s2, " ");
	while (ptr1 != NULL)
	{
		printf("%s\n", ptr1);
		ptr1 = strtok(NULL, " ");
	}
	free(s2);
	return 0;
}