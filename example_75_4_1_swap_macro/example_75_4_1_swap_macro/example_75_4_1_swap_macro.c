#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

#define SWAP(a,b,type)do{\
	type temp;\
	temp = a;\
	a = b;\
	b = temp;\
} while (0)

int main()
{
	int num1 = 10;
	int num2 = 20;
	SWAP(num1, num2, int);
	printf("%d %d\n", num1, num2);

	float num3 = 1.5f;
	float num4 = 3.8f;
	SWAP(num3, num4, float);
	printf("%f %f\n", num3, num4);
	
	return 0;

}

/*
#define으로 SWAP을 정의할 때 
바꿀 변수가 들어갈 a와 b 그리고 
자료형이 들어갈 type을 지정해줍니다. 
함수에서는 자료형을 매개변수에 
그대로 전달할 수 없지만 매크로는 
전달하는 것이 아니라 지정한 코드 
자체가 바뀌게 되므로 자료형도 지정할 수 있습니다.
*/