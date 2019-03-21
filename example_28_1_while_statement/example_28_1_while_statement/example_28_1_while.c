#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 100)
	{
		printf("hello world%d\n", i);
		i++;
	}
	int j;
	printf("input your number:");
	scanf("%d", &j);
	while (j > 0)
	{
		printf("decrement %d\n", j);
		j--;
	}
	return 0;
}