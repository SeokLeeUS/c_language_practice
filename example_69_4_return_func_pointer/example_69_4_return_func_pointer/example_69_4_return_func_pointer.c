#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

int(*getAdd(int x, int y))(int, int)
{
	printf("x:%d, y:%d\nadd: ", x, y);
	return add;
}

int main()
{
	printf("%d\n", getAdd(3, 4)(10, 20));
	return 0;
}


/*
함수 포인터를 반환값으로 사용할 때는
먼저 (*getAdd())과 같이 * (애스터리스크) 뒤에
함수 이름을 지정하고 괄호를 붙입니다. 
다시 이 상태에서 괄호로 묶어준 뒤 맨 앞에는
함수 포인터의 반환값 자료형, 
맨 뒤 괄호 안에는 함수 포인터의 
매개변수 자료형을 지정합니다. 
함수 안에서는 return 키워드로 add 함수의 메모리 주소를 반환합니다.

*/