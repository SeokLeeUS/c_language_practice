#include <stdio.h>
#include <math.h>
struct Point2D {

	int x;
	int y;
};

int main()
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	printf("p1: %d %d\n", p1.x, p1.y);
	printf("p2: %d %d\n", p2.x, p2.y);
	
	int a = abs(p2.x - p1.x);
	int b = abs(p2.y - p1.y);

	double c = sqrt(pow(a,2) + pow(b,2));
	printf("%f\n", c);

	return 0;
}


/*
여기서는 a의 제곱과 b의 제곱의 합을 
(a * a) + (b * b)처럼 표현했는데 
거듭제곱(power)을 구하는 pow 함수를 사용해도 됩니다(math.h).

pow(값, 지수)
double pow(double _X, double _Y);
_X의 _Y 거듭제곱을 반환
*/

