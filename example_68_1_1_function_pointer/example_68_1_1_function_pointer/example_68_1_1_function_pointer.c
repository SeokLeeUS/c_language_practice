/*
함수 포인터는 먼저 함수의 
반환값 자료형을 지정해주고, 
함수 포인터 이름 앞에 * (애스터리스크)를 붙인 뒤 
( ) (괄호)로 묶어줍니다. 그리고 다시 
괄호를 붙여 함수라는 것을 알려줍니다.
*/
#include <stdio.h>
// 먼저 반환값과 매개변수가 없는 hello 함수가 있습니다.

void hello()
{
	printf("hello, world!\n");
}

void(*fp)(); // 반환값과 매개변수가 없는 함수 포인터 fp 선언


void bonjour()
{
	printf("bonjour le monde!\n");
}

int main()
{
	void(*fp)();
	fp = hello;
	fp();

	fp = bonjour;
	fp();

	return 0;
}

/*
//↓ 반환값 자료형
void(*fp)();    // 반환값과 매개변수가 없는 함수 포인터 fp 정의
				//     ↑   ↖ 매개변수가 없음
				// 함수 포인터 이름
*/