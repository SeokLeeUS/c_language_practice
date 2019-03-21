#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	long long *numPtr = malloc(sizeof(long long));
	memset(numPtr, 0x27, 8);
	printf("0x%llx\n", *numPtr);
	free(numPtr);


	long long *numPtr2 = malloc(sizeof(long long));
	memset(numPtr2, 0, sizeof(long long));
	printf("%lld\n", *numPtr2);

	char *cPtr = malloc(sizeof(char));
	memset(cPtr, 0, sizeof(char));
	printf("%c\n", *cPtr);

	return 0;
}