#include <stdio.h>
void bubble_sort(int arr[], int count)
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}

	}
}

int main()
{
	int numArr[10] = { 8,4,2,5,3,6,10,1,6,9 };
	bubble_sort(numArr, sizeof(numArr) / sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d", numArr[i]);
	}

	printf("\n");

	return 0;
}

/*
거품 정렬 알고리즘의 규칙은 다음과 같습니다.

처음부터 끝까지 요소를 순회하면서 모든 요소를 비교
현재 값과 다음 값을 비교하여 큰 값을 다음으로 보냄(오름차순)
*/
