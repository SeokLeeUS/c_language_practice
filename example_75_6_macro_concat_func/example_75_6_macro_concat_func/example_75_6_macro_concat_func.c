#include <stdio.h>
#define EXECUTER(x) hello##x()
void hello1()
{
	printf("hello 1\n");
}
void hello2()
{
	printf("hello 2\n");
}

int main()
{
	EXECUTER(1);
	EXECUTER(2);

	return 0;
}

/*
EXECUTER에 1을 넣으면
hello와 1이 붙게 되므로
hello1 함수를 호출하고,
2를 넣으면 hello2 함수를 호출합니다.
*/