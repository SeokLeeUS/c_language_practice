#include <stdio.h>
#define SWAP(a, b, type) do {\
	type temp; \
		temp = a; \
		a = b;\
	b = temp;\
} while(0)

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

즉, 변수 temp가 두 개 선언되지만
do while (0) 안이므로 컴파일 에러가
발생하지 않습니다. 만약 SWAP 정의에서
do while (0)과 중괄호를 삭제하고
컴파일하면 temp가 재정의 되었다는
컴파일 에러가 발생하게 됩니다.

특히 매크로에서 do while (0)을 사용하면
if 조건문과 for, while 반복문에서도
문제 없이 사용할 수 있습니다.


만약 SWAP 매크로를 do while (0) 대신 { } (중괄호)로만 
정의하면 전처리기를 거쳤을 때 잘못된 코드가 나옵니다.

// 중괄호로만 매크로 정의
#define SWAP(a, b, type) { \
type temp; \
temp = a;  \
a = b;     \
b = temp;  \
}

if (num1 == 10)
SWAP(num1, num2, int);
else
printf("10이 아님\n");
이 코드가 전처리기를 거치면 다음과 같이 } 
(닫는 중괄호) 뒤에 ; 
(세미콜론)이 붙어서 컴파일 에러가 발생합니다.

if (num1 == 10)
{
int temp;
temp = num1;
num1 = num2;
num2 = temp;
};    // 세미콜론 때문에 컴파일 에러가 발생
else
printf("10이 아님\n");

*/