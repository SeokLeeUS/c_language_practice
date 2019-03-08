#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person {
	char name[10];
	int age;
	char address[20];

} Person;

int main()
{
	Person p1;
	struct _Person p2;
	strcpy(p1.name, "seok");
	p1.age = 30;
	strcpy(p1.address, "upland");

	strcpy(p2.name, "saejin");
	p2.age = 40;
	strcpy(p2.address, "view st");

	printf("%s%d%s\n", p1.name, p1.age, p1.address);
	printf("%s%d%s\n", p2.name, p2.age, p2.address);
	return 0;
}


/*
만약 구조체 별칭을 사용하지 않고,
구조체 이름으로 변수를 선언하고 싶다면 어떻게 해야 할까요? 
다음과 같이 struct 키워드에 구조체 이름으로 변수를 선언하면 됩니다.

struct _Person p1;    // 구조체 이름으로 변수 선언
즉, struct _Person p1;과 Person p1;은 완전히 같습니다.
*/



