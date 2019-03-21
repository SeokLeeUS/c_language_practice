#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char c1;
	scanf("%c", &c1);
	char count;
	for (count = c1;c1<='z';c1++)
		printf("%c", c1);
	printf("\n");
	return 0;
}