#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *numPtr = malloc(sizeof(int) * 10); /*10개의 integer 자리를 할당한다. */
	numPtr[0] = 0;
	numPtr[1] = 1;

	printf("%d\n", numPtr[0]);

	free(numPtr);

	return 0;
}