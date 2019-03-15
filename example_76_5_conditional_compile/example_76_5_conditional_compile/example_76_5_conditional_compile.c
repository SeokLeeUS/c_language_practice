#include <stdio.h>
#define DEBUG_LEVEL 2
#define DEBUG

struct Person {
	char name[20];
	int age;
	char address[100];
#if DEBUG_LEVEL >= 2 && defined DEBUG
	char residentRegistrationNumber[15];    // 주민등록번호
#endif
};

int main()
{
	struct Person p1 = {
		"홍길동",
		30,
		"서울시 용산구 한남동",
#if DEBUG_LEVEL >= 2 && defined DEBUG
		"860821-1326821"
#endif
	};

#if DEBUG_LEVEL >= 2 && defined DEBUG
	printf("%s %d %s %s\n", p1.name, p1.age, p1.address, p1.residentRegistrationNumber);
#else
	printf("%s %d %s\n", p1.name, p1.age, p1.address);
#endif

	return 0;
}