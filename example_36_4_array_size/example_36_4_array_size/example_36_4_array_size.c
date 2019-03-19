#include <stdio.h>
int main() 
{
	
	/*scanf("%d", &index);*/

	int numArr[100];
	for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
	{
		numArr[i] = i * 2;
		printf("%d\n", numArr[i]);
	}

	return 0;
}