#include <stdio.h>

typedef struct _Point2D {
	int x;
	int y;

}Point2D;


struct Point3D {
	int x;
	int y;
	int z;
};

int main()
{
	Point2D p1;
	struct Point3D p2;
	p1.x = 10;
	p1.y = 20;

	p2.x = 1;
	p2.y = 2;
	p2.z = 2;

	printf("%d %d\n", p1.x, p1.y);
	printf("%d %d %d\n", p2.x, p2.y, p2.z);
	return 0;
}