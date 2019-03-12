#include <stdio.h>
struct Point2D {
	int x;
	int y;
};

void printPoint2D(struct Point2D p)
{
	printf("%d %d\n", p.x, p.y);
}

int main()
{
	struct Point2D p1;
	p1.x = 10;
	p1.y = 20;
	printPoint2D(p1);
	return 0;
}

/*
구조체 변수 p1을 선언하고 
x에 10, y에 20을 저장한 뒤 함수 
printPoint2D를 호출할 때 구조체를 
그대로 전달했습니다. 따라서 printPoint2D는
구조체를 매개변수로 사용하므로 
void printPoint2D(struct Point2D p)와 
같이 정의해줍니다.
*/