#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ptr[1000];
	scanf("%[^\n]s", ptr);
	int r = 0;
	char *ptr_space= strchr(ptr, ' ');

	while (ptr_space != NULL)
	{
		r++;
		ptr_space = strchr(ptr_space + 1, ' ');
	}

	printf("%d\n", r);

	return 0;
}