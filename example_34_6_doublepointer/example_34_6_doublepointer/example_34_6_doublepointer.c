#include<stdio.h>
int main()
{
	int i = 10;
	int *intPtr;
	int **intPtrPtr;
	intPtr = &i;
	intPtrPtr = &intPtr;
	printf("%d\n", **intPtrPtr);
	printf("%d\n", *intPtr);

	return 0;
}