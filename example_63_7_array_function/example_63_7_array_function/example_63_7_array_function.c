#include <stdio.h>
#include <stdlib.h>


void allocMatrix(void ***ptr, int m, int n, int elementSize)
{
	*ptr = malloc(sizeof(void *)*m);
	for (int i = 0; i < m; i++)
	{
		(*ptr)[i] = malloc(elementSize*n);
	}
}

void freeMatrix(void ***ptr, int m)
{
	for (int i = 0; i < m; i++)
	{
		free((*ptr)[i]);
	}
	free(*ptr);
}


int main()
{
	short **matrix;
	allocMatrix(&matrix, 3, 3, sizeof(short));
	matrix[0][2] = 10;
	matrix[1][1] = 20;
	printf("%d %d\n", matrix[0][2], matrix[1][1]);
	freeMatrix(&matrix, 3);
	return 0;
}

/*
short **matrix;와 같이 
이중 포인터에 메모리를 할당하여 
행렬을 만들어야 합니다. 
여기서 allocMatrix(&m, 3, 3, sizeof(short));
와 같이 matrix의 메모리 주소, 행렬 m, 행렬 n,
요소 크기를 넣어주었으므로 
이 정보들을 이용해서 함수를 만들면 됩니다.

matrix가 이중 포인터이므로 
메모리를 할당해서 가져오려면 
allocMatrix의 매개변수를 
삼중 포인터로 만듭니다. 
행렬(2차원 배열)의 세로 공간에는 *ptr = malloc(sizeof(void *) * m);
과 같이 *ptr을 역참조하여 메모리를 할당하면 됩니다. 
여기서 주의할 점은 가로 공간 할당인데 *ptr[i]에 
메모리를 할당하면 배열의 요소 ptr[i]를 
역참조하여 메모리를 할당하게 됩니다. 
따라서 (*ptr)[i]과 같이 ( ) (괄호)를 사용하여 
ptr을 먼저 역참조한 뒤 [ ](대괄호)로 
세로 공간의 배열 요소에 접근하여 메모리를 할당해야 합니다.

*/