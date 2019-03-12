#include <stdio.h>
#include <stdlib.h>

int swapArray(int *arr, int index1, int index2)
{
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	swapArray(arr, 0, 1);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	
	return 0;
}