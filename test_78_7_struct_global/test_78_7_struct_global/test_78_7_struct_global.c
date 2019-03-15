#include <stdio.h>
#include <stdlib.h>

struct Point2D {
	int x;
	int y;
};

struct Point2D *p1;

/*
main, printPoint2D 함수에서 
p1을 사용합니다. 또한, p1에 
malloc으로 메모리를 할당하고 
화살표 연산자 ->로 멤버에 접근합니다. 
따라서 p1은 구조체 포인터이므로 함수 바깥에 
struct Point2D *p1;과 같이 선언해주면 됩니다.
*/

void printPoint2D()
{
	printf("%d %d\n", p1->x, p1->y);
}

int main()
{
	p1 = malloc(sizeof(struct Point2D));
	p1->x = 10;
	p1->y = 20;

	printPoint2D();

	free(p1);

	return 0;
}