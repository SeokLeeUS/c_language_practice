#include <stdio.h>
int main()
{
	int numArr[3][4] = {

		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}

	};

	printf("%d\n", numArr[0][1]);

	int numArr1[3][4] = { 0, };

	printf("%d\n", numArr1[0][4]);

	return 0;
}