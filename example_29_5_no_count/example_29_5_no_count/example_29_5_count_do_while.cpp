#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i = 0;
	srand(time(NULL));

	do
	{

		i = rand() % 10;
		printf("%d\n", i);
	} while (i != 3);

	return 0;
}
