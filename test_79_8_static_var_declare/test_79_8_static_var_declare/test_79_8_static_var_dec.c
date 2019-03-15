#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Point2D {
	int x, y;
};

struct Point2D movePoint(int offset)
{
	static struct Point2D xx = { 10,20 };
	xx.x += offset;
	xx.y += offset;
	return (xx);
}


/*
함수 movePoint를 호출할 때마다 
반환값이 달라지고 있습니다. 
실행 결과의 x, y가 입력 값만큼 
증가해야 하므로 더하는 값이 사라지지 않고 
계속 누적되어야 합니다. 
따라서 movePoint 안에서 Point2D 구조체를 
정적 변수로 선언하고 최초 좌표 
10, 20으로 초기화합니다. 
그리고 x, y에 매개변수 offset을 더하여 반환해주면 됩니다.
*/

int main()
{
	int num1;
	struct Point2D p;

	scanf("%d", &num1);

	p = movePoint(num1);
	printf("%d %d\n", p.x, p.y);

	p = movePoint(num1);
	printf("%d %d\n", p.x, p.y);

	p = movePoint(num1);
	printf("%d %d\n", p.x, p.y);

	return 0;
}