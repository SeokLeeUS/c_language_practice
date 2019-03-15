#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row;
	scanf("%d", &row);

	int **numPtr = malloc(sizeof(int *) * row);
	for (int i = 0; i < row; i++)
	{
		numPtr[i] = malloc(sizeof(int) * row);
	}

	/*memset(numPtr, 0, sizeof(numPtr[0][0] * row*row));*/

	for (int i = 0; i < row; i++)
		numPtr[i][i] = 1;

	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (i == j)
				printf("%d ", numPtr[i][j]);
			else
				printf("%d ", 0);
		}
		printf("\n");
	}	

	return 0;
}