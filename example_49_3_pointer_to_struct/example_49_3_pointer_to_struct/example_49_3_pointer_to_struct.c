#include <stdio.h>

struct Person {
	int i;
	char j;
};

int main()
{
	struct Person p1;
	struct Person *ptr;
	ptr = &p1;
	ptr->i = 30;
	
	printf("age: %d\n", p1.i);
	printf("age: %d\n", ptr->i);

	return 0;
}
/*
구조체 포인터 p1의 멤버 x에 접근하는 방법
p1->x
*/
