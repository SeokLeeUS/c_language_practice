#include <stdio.h>

struct Point2D {
	int x;
	int y;
};

struct Point2D p1 ={.x=10,.y=20};

/*
구조체 Point2D가 정의되어 있고 
구조체 변수 p1을 main 함수와 printPoint2D 
함수에서 모두 사용하고 있습니다. 
따라서 p1은 전역 변수이므로 함수 바깥에 
struct Point2D p1과 같이 선언해주면 됩니다. 
그리고 main 함수에서 출력한 값이 10, 20이므로 = { 10, 20 };
과 같이 전역 변수에 값을 초기화해주면 됩니다.
*/


void printPoint2D()
{
	printf("%d %d\n", p1.x, p1.y);
}

int main()
{
	printf("%d %d\n", p1.x, p1.y);

	p1.x = 30;
	p1.y = 40;
	printPoint2D();

	return 0;
}