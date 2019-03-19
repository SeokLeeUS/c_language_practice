#include <stdio.h>
int main()
{
	int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};


	int col = sizeof(numArr[0]) / sizeof(int);

	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}

	return 0;
}