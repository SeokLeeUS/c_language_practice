#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long ***m = malloc(sizeof(long long **) * 2);
	for (int i = 0; i < 2; i++)
	{
		m[i] = malloc(sizeof(long long*) * 3);

		for (int j = 0; j < 3; j++)
			m[i][j] = malloc(sizeof(long long) * 5);
	}

	m[1][2][4] = 0;
	printf("%d\n", m[1][2][4]);

	for (int i = 0; i < 2; i++)
	{
		free(m[i]);
		for (int j = 0; j < 3; j++)
			free(m[i][j]);
	}
	return 0;
}