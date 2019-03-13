#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a*b;
}

int main()
{
	int(*fp)(int, int);
	// int형 반환값, int형 매개변수 두 개가 있는 함수 포인터 fp 선언

	fp = sum;

	printf("sum: %d\n", fp(10, 20));

	fp = mul;

	printf("multiply: %d\n", fp(10, 20));

	return 0;
}

/*
즉, 함수 포인터를 활용하면 
상황에 따라서 함수를 바꿔가며 호출할 수 있습니다.

지금까지 함수 포인터에 대해 배웠는데 
문법이 좀 복잡했습니다. 함수 포인터는 C 언어에서도 
어려운 부분에 속하므로 당장은 완벽하게 
이해하지 않아도 됩니다. 나중에 함수 포인터가 
필요할 때마다 다시 돌아와서 찾아보면 됩니다.
*/