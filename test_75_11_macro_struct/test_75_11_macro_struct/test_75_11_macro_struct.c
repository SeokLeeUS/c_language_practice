#include <stdio.h>
struct Point2D {
	float x, y;
};

#define ARRSIZE(x) sizeof(x)/sizeof(x[0])

/*
배열의 크기는 배열이 차지하는 
전체 크기에서 요소 하나의 크기를 
나눠주면 구할 수 있습니다. 
따라서 매크로 ARRSIZE는 
#define ARRSIZE(x) (sizeof(x) / sizeof(x[0]))과 
같이 정의해주면 됩니다. 또는 
(sizeof(x) / sizeof(*x))처럼 배열을 
역참조하여 나온 값의 크기로 나눠도 됩니다.
*/

int main()
{
	int numArr1[10];
	long long numArr2[5];
	struct Point2D p[3];

	printf("%d\n", ARRSIZE(numArr1));
	printf("%d\n", ARRSIZE(numArr2));
	printf("%d\n", ARRSIZE(p));

	return 0;
}