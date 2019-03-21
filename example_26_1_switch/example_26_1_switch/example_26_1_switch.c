#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	scanf("%d", &num1);
	switch (num1)
	{
	case 1:
		printf("1\n");
		break;

	case 2:
		printf("2\n");
		break;

	case 3:
		printf("3\n");
		break;
	default:
		printf("default\n");
		break;
	}

}