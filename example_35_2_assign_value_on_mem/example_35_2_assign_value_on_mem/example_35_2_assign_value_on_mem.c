#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *numPtr;
	int i = 10;
	numPtr = malloc(sizeof(int));
	*numPtr = 200;
	printf("%d\n", *numPtr);
	free(numPtr);


	return 0;
}