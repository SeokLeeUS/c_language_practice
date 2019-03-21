#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int count;
	scanf("%d", &count);

	for (int i = 1; i<=count; i++)
		printf("hello world: %d\n", i);

	return 0;
}