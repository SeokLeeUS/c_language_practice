#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num1;
	char s1[11];
	scanf("%d%s", &num1, s1);
	//printf("%d%s\n", num1, s1);
	int length = strlen(s1);

	if (length < num1)
		printf("wrong");

	else
	{
		for (int i = 0; i < length - (num1 - 1); i++)
		{
			for (int j = 0; j<num1; j++)
				printf("%c", s1[i + j]);

			printf("\n");
		}
	}



	return 0;
}