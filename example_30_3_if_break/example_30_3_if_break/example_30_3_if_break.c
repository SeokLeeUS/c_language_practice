#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count;
	int i = 1;
	scanf("%d", &count);

	while (i<count)
	{
		i++;
		if (i%2 != 0)
			continue;
		
		printf("%d\n", i);
		
	}

	return 0;
}