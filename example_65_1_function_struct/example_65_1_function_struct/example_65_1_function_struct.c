#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void printPerson(struct Person p)
{
	printf("%s\n", p.name);
	printf("%s\n", p.address);
	printf("%d\n", p.age);
}

int main()
{
	struct Person p1;
	strcpy(p1.address, "upland view");
	p1.age = 40;
	strcpy(p1.name, "seok lee");

	printPerson(p1);
	// 복합 리터럴 방식으로 구조체를 넘겨줌
	printPerson((struct Person) { .name = "seok lee", .age = 30, .address = "upland view st"});
	
	return 0;
}
