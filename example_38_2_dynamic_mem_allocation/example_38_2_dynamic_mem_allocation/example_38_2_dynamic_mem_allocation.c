#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d", &size);

	int *ptArr = malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++)
	{
		ptArr[i] = i;
		printf("%d\n", ptArr[i]+1);
	}
		
	free(ptArr); /*동적 메모리 할당 해제*/
	return 0;
}