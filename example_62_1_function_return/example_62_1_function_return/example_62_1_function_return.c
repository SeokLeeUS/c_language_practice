#include <stdio.h>
void helloNumber(int num1)
{
	printf("Hello, %d\n", num1);
}

int add(int a, int b)
{
	return a + b;
}

int main()
{

	helloNumber(10);
	helloNumber(20);

	int num1;
	num1 = add(10, 20);
	printf("%d\n", num1);

	return 0;
}


/*
이처럼 F11과 Shift+F11키를 사용하면 함수의 
안과 밖을 자유롭게 이동할 수 있습니다. 
마지막으로 지금까지 배운 Visual Studio 
디버거 단축키를 모두 정리해보겠습니다.

중단점 삽입/삭제: F9
디버깅 시작 및 계속: F5
디버깅 중지: Shift+F5
프로시저 단위 실행: F10
한 단계씩 코드 실행: F11
프로시저 나가기: Shift+F11
*/
