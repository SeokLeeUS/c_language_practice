#include <stdio.h>
void hello()
{
	printf("hello,world\n");
	hello();
}

int main()
{
	hello();
	return 0;

}
/*
hello 함수 안에서 다시 
hello 함수를 호출하고 있습니다. 
소스 코드를 컴파일하여 실행해보면 
"Hello, world!" 문자열이 계속 
출력되다가 프로그램이 종료됩니다. 
왜냐하면 hello 함수가 자기자신을 계속 호출하다가 
스택이 넘쳐서 스택 오버플로우(stack overflow) 
에러가 발생하기 때문입니다(함수 호출은 메모리의 스택을 사용합니다).
*/