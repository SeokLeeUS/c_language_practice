#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Point3D{
	float x;
	float y;
	float z;
}Point3D;

int main()

{
	Point3D *p1 = malloc(sizeof(Point3D));
	p1->x = 10.00000f;
	p1->y = 20.000000f;
	p1->z = 30.000000f;
	printf("%f %f %f\n", p1->x, p1->y, p1->z);
	return 0;
}

/*
typedef를 사용하여 구조체 별칭 Point3D을 정의했으므로 
Point3D *p1 = malloc(sizeof(Point3D));
처럼 포인터를 선언하고 메모리를 할당합니다.

10 20 30이 출력되어야 하므로 
->를 사용하여 x에는 10.0, y에는 20.0, z에는 30.0
을 할당하면 됩니다.
*/