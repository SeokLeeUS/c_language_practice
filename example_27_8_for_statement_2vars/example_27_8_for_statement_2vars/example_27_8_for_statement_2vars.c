#include <stdio.h>

int main()
{
	int i, j;

	for (i = 0, j = 1; i < 10; i++, j += 2)
		printf("%d %d\n", i, j);
	return 0;
}