#include <stdio.h>
extern int num1;
/*
main 함수에서 전역 변수 
num1의 값을 출력하고 있습니다. 
하지만 컴파일을 해보면 num1이 
선언되지 않은 식별자라고 나옵니다. 
분명 print.c 파일에 전역 변수가 선언되어 있는데 말이죠.

다른 소스 파일(외부)에 선언된 
전역 변수를 사용할 때는 extern 키워드를 사용합니다.

*/

int main()
{
	printf("%d\n", num1);
	return 0;
}

