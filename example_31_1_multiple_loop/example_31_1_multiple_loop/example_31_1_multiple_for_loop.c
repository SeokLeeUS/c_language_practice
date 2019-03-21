#include <stdio.h>
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j >= 0; j--)
		{
			if (j > i)
			{
				printf("*");
			}
		}
		printf("%d\n", i);

	}

	return 0;
}