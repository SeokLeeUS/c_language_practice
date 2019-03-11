#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
	int age;
	char name[20];
	char address[100];
}; // structure needs semi colon

struct Person getPerson()
{
	struct Person p;
	strcpy(p.name, "gildong hong");
	p.age = 30;
	strcpy(p.address, "upland view st");
	return p;
}

/*
struct Person *allocPerson()
{
	struct Person *p = malloc(sizeof(struct Person));
	strcpy(p->name, "gildong hong");
	p->age = 30;
	strcpy(p->address, "upland view st");
	return p;
}
*/

typedef struct _Person {
	char name[20];
	int age;
	char address[100];
}Person, *PPerson;

PPerson allocPerson()
{
	PPerson p = malloc(sizeof(Person));
	strcpy(p->name, "gildon hong");
	p->age = 30;
	strcpy(p->address, "upland view st");
	return p; //don't forget returning pointer after function definition completes. 
}

int main()
{

	struct Person p1;
	p1 = getPerson();
	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	printf("address: %s\n", p1.address);

	struct Person *p2;
	p2 = allocPerson();
	printf("name: %s\n", p2->name);
	printf("age: %d\n", p2->age);
	printf("address: %s\n", p2->address);
	free(p2);

	return 0;
}
