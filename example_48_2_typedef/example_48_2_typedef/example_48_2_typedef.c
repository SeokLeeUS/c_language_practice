#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _Person {
	char name[20];
	int age;
	char address[30];
}Person;

int main()
{
	Person p1 = { .name = "seok",.age = 30,.address="upland" };
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);

	return 0;
}

/*
참고 | 구조체 태그
struct 뒤에 붙는 구조체 이름은 원래 구조체 태그(tag)라 부릅니다(나중에 배울 공용체, 열거형도 마찬가지로 공용체 태그, 열거형 태그라 부릅니다). 그리고 typedef로 정의한 구조체 별칭은 사용자 정의 타입의 이름이라 할 수 있습니다.

struct 태그 {
자료형 멤버이름;
};

typedef struct 태그 {
자료형 멤버이름;
} 타입이름;
C 언어는 나온지가 오래되다 보니 여러 가지 관습이 남아 있는데 구조체 태그와 타입 이름을 구분하기 위해 관례상 태그 앞에 _, tag_, tag를 붙이고 있습니다. 코드에 따라서 태그 뒤에 _t를 붙이기도 합니다.

예) _Person, tag_Person, tagPerson, Person_t
구조체 태그와 타입 이름은 사실상 같은 구조체를 지칭하므로 이름을 완전히 다르게 지을 필요는 없습니다. 요즘은 구조체 태그와 타입 이름을 똑같이 만들기도 합니다.

*/