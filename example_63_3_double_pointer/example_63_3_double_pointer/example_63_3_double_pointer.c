#include <stdio.h>
#include <stdlib.h>

void allocMemory(void **ptr, int size)
{
	*ptr = malloc(size);
}

int main()
{
	long long *numPtr;
	allocMemory(&numPtr, sizeof(long long));
	*numPtr = 10;
	printf("%lld\n", *numPtr);
	free(numPtr);
	return 0;
}

/*
void allocMemory(void *ptr, int size)와 같이 
매개변수를 void 포인터로 지정한 뒤 ptr에 메모리 할당.

void allocMemory(void *ptr, int size)    // 반환값 없음, void 포인터 매개변수 지정
{
ptr = malloc(size);    // ptr은 allocMemory를 벗어나면 사용할 수 없음
}


allocMemory 함수를 만들 때 
void allocMemory(void **ptr, int size)와 같이 
void 이중 포인터 ptr을 받도록 만듭니다. 
물론 할당할 메모리 크기도 알아야 하므로 size도 함께 받습니다.

함수 안에서는 매개변수 void **ptr를 역참조하여 
void *ptr이 되도록 만든 뒤 malloc 함수로 메모리를 할당합니다.

*/
