/*
반환값자료형 함수이름()
{
return 반환값;
}

한 가지 중요한 점은 반환값과 
반환값의 자료형이 일치해야 한다는 점입니다. 
반환값이 정수이면 반환값 자료형은 
정수에 해당하는 int, long 등을 쓰고 실수이면 
float, double를 써야 합니다. 
즉, 반환값의 자료형은 반환값의 
형태와 크기에 따라 결정합니다.
*/
#include <stdio.h>
#include<stdbool.h>

int one()
{
	float a = 1.1f;
	return (int)a;
}

bool truth()
{
	return false;
}

float realNumber()
{
	return 1.2345f;
}

int main()
{
	int num1;
	int num3;
	float num2;
	bool b1;
	num1 = one();
	num3 = (int)realNumber();
	printf("%d\n", num1);
	printf("%d\n", truth());
	printf("%f\n", realNumber());
	printf("%d\n", num3);

	return 0;
}
