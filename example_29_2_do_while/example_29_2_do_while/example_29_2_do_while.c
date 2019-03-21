# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main()
{
	int count;
	int i = 0;
	scanf("%d", &count);
	do
	{
		printf("hello, world %d\n", i);
		i++;

	} while (i <= count);

	return 0;

}