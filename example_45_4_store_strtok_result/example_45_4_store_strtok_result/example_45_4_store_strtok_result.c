#define _CRT_SECURE_NO_WARNINGS /*prevent strtok security warning */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 30);
	char *s1_ptr[30] = { NULL, }; /* declare pointer string array */
	strcpy(s1, "Alice Wonder World");
	char *ptr1 = strtok(s1, " ");
	int i = 0;
	while (ptr1 != NULL)
	{
		s1_ptr[i] = ptr1;
		i++;
		ptr1 = strtok(NULL, " ");
	}

	for (int j = 0; j < 30; j++)
	{
		if(s1_ptr[j]!=NULL)
			printf("%s\n", s1_ptr[j]);
	}

	return 0;
}