#include <stdio.h>
struct Point3D {
	float x;
	float y;
	float z;
};

int main()
{
	struct Point3D p1 = { 10.0f,20.0f,30.0f };
	struct Point3D *ptr;
	ptr = &p1;
	printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);

	return 0;
}

/*
구조체 변수 p1에만 값이 들어있는데,
printf에서 구조체 포인터
ptr로 멤버의 값을 출력하고 있습니다.
따라서 주소 연산자 &를 사용하여
ptr에 p1의 주소를 할당하면
ptr로 p1의 값을 출력할 수 있습니다.
*/