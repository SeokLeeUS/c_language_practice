#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int height;
	scanf("%d", &height);
	
	for (int i = 1; i <= height; i++)
	{
		for (int j = height; j > 0; j--)
		{
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		for (int j = 1; j < height; j++)
		{
				if (j < i)
					printf("*");
				else
					printf(" ");
		}
		printf("\n");
	}

	return 0;
}