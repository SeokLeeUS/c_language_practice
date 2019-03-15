#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int int1;
	scanf("%d", &int1);
	/*int decimal;*/
	int remnant;
	int numArr[10] = { 0, };
	int i = 0;
	while (1)
	{
		remnant = int1 % 2;
		int1 = int1 / 2;
		numArr[i] = remnant;
		i++;
		
		if (int1 == 0)
			break;
	}

	for (int j = i-1; j >= 0; j--)
		printf("%d", numArr[j]);
	printf("\n");

	return 0;
}