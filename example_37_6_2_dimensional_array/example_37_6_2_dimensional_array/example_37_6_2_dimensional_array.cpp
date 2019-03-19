#include <stdio.h>
int main()
{
	int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};


	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr);
	printf("%p\n", *numArr);
	printf("%d\n", numPtr[2][1]); /*(this is strange way)*/
	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numPtr));
	return 0;
}

