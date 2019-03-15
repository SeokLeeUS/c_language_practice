#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int tot;
	scanf("%d", &tot);

	while (tot >= 1200)
	{
		tot = tot - 1200;
		printf("%d\n", tot);
	}

	return 0;
}
