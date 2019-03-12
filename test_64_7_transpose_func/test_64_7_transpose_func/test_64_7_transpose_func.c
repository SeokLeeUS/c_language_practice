#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int transpose(int(*matarr)[4], int num1)

{
	
	for (int i = 0; i < num1; i++)
	{
		for (int j = i; j < num1; j++)

		{
			if (i != j)
			{
				int temp = matarr[i][j];
				matarr[i][j] = matarr[j][i];
				matarr[j][i] = temp;
			}
		}
	}

}

int main()
{
	int matrix[4][4];

	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
		&matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3],
		&matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3],
		&matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3],
		&matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]
	);

	int n = sizeof(matrix[0]) / sizeof(int);

	transpose(matrix, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)

		{
			printf("%d ", matrix[i][j]);
		}

		printf("\n");
	}

	return 0;

}

/*
표준 입력으로 입력된 정수 열여섯 개가 행렬(2차원 배열)에 저장되었습니다. 
이 행렬 요소를 주대각선을 기준으로 뒤집어주는 함수를 구현해야 합니다.
transpose는 void transpose(int m[][4], int n)와 
같이 매개변수에 대괄호 두 개에 가로 크기를 지정해주고, 
행렬의 크기를 받습니다. 함수 안에서는 반복문을 사용하여 
m[i][j]와 m[j][i]의 값을 서로 바꿉니다. 단, j가 계속 0부터 시작하면 
행렬이 뒤집혔다가 다시 되돌아오므로 j는 i의 값부터 시작하여 
이미 뒤집은 값은 그냥 넘어가도록 만듭니다.
물론 반복문을 사용하지 않고 행렬의 각 요소를 일일이 뒤집어도 됩니다.

*/