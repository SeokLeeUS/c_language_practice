#include <stdio.h>
int main()
{
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[3]);
	printf("%d\n", numArr[9]);

	int numArr_Null[10] = { 0, };
	printf("%d\n", numArr_Null[3]);
	
	return 0;
}