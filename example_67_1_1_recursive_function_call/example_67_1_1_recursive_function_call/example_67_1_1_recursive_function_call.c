#include <stdio.h>
void hello(int count)
{

	if (count == 0)
		return; // 종료조건을 만듦. count 가 0이면 hello함수를 호출하지 않고 끝냄. 

	printf("hello world %d\n ",count);

	hello(--count);
}

int main()
{
	hello(5);
	return 0;
}


