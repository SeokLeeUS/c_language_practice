#include <stdio.h>
int main()
{
	int i1;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j < i)
				printf(" ");
			
			else
				printf("*");
			/*goto EXIT;*/

		}
		printf("%d\n", i);
	}

/*EXIT:*/	
	return 0;
}



