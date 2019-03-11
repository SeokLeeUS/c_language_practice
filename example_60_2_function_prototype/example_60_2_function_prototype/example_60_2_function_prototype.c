#include <stdio.h>
void hello();

/*
어떤 함수가 있다는 사실을 알려주려면 
함수 선언(function declaration)을 해주어야 합니다. 
함수 선언은 다음과 같이 반환값 자료형,
함수 이름, ( ) (괄호)순으로 적어주고 ;
(세미콜론)을 붙입니다. 
특히 여기서는 함수를 정의할 때와는 
달리 { } (중괄호)를 사용하지 않습니다.
*/

int main()
{

	hello();
	return 0;
}

void hello()
{
	printf("hello world\n");
}