#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person *p)
{
	strcpy(p->address, "51271 upland view st");
	strcpy(p->name, "seok lee");
	p->age = 40;
}

int main()
{
	struct Person p1;
	strcpy(p1.address, "honey locust");
	strcpy(p1.name, "saejin han");
	p1.age = 38;

	/*
	구조체 변수 p1을 선언하고 
	각 멤버에 "홍길동", 30, "서울시 용산구 한남동"을 
	저장했습니다. 함수 setPerson은 
	매개변수가 구조체 포인터이므로 & (주소 연산자)
	를 사용하여 p1의 주소를 전달해야 합니다.
	*/

	setPerson(&p1);

	// setPerson에서 변경한 값이 출력됨
	printf("이름: %s\n", p1.name);       // 이름: 고길동
	printf("나이: %d\n", p1.age);        // 나이: 40
	printf("주소: %s\n", p1.address);    // 주소: 서울시 서초구 반포동

	return 0;
}