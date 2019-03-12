#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void allocArray(void **numArrPtr, int ArrSize, int ElementSize)
{
	*numArrPtr = malloc(ElementSize*ArrSize);
	
}

/*
allocArray 함수에 long long 포인터 
numArr1의 메모리 주소 또는 int 포인터 
numArr2의 메모리 주소를 넣고 있습니다. 
자료형에 상관없이 처리할 수 있어야 하므로 
void 포인터로 지정해주는데 동적 메모리를 
할당한 포인터를 가져와야 하므로 
void 이중 포인터로 지정해줍니다.
함수 안에서는 *ptr = malloc(elementSize * arraySize);
와 같이 매개변수로 받은 이중 포인터를 역참조하여 
요소 크기(elementSize) * 배열 크기(arraySize)
만큼 메모리를 할당해주면 됩니다.
*/


int main()
{
	long long *numArr1;
	int *numArr2;

	allocArray((void**)&numArr1, 10, sizeof(long long));
	allocArray((void**)&numArr2, 3, sizeof(int));

	scanf("%lld %d", &numArr1[9], &numArr2[2]);
	printf("%lld %d\n", numArr1[9], numArr2[2]);
	free(numArr2);
	free(numArr1);

	return 0;
}