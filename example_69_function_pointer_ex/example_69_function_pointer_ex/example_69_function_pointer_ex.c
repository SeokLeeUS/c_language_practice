#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	int(*fp[4])(int, int);

	fp[0] = add;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = div;
	int funcnumber;
	int num1, num2;
	scanf("%d %d %d",&funcnumber, &num1, &num2);
	printf("%d\n", fp[funcnumber](num1, num2));

	return 0;
}

/*
먼저 다음과 같이 함수 포인터 이름 fp 뒤에 대괄호를 붙이고 
크기를 4로 지정하여 요소가 4개인 함수 포인터 배열을 선언했습니다.

// int형 반환값, int형 매개변수 두 개가 있는 함수 포인터 배열 선언
//↓ 반환값 자료형
int (*fp[4])(int, int);    // ← 매개변수 자료형
//    ↑   ↖ 크기가 4인 배열
// 함수 포인터 이름
이제 fp는 배열이므로 인덱스로 접근할 수 있습니다. 여기서는 add, sub, mul, div 함수의 메모리 주소를 각 요소에 저장했습니다.

fp[0] = add;    // 첫 번째 요소에 덧셈 함수의 메모리 주소 저장
fp[1] = sub;    // 두 번째 요소에 뺄셈 함수의 메모리 주소 저장
fp[2] = mul;    // 세 번째 요소에 곱셈 함수의 메모리 주소 저장
fp[3] = div;    // 네 번째 요소에 나눗셈 함수의 메모리 주소 저장
*/