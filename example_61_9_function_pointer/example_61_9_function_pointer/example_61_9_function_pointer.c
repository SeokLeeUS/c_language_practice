#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
};

struct Person *allocPerson()
{

	struct Person *p = malloc(sizeof(struct Person));
	p->age = 22;
	strcpy(p->name, "Kayle");
	return(p);
}

int main()
{
	struct Person *p1;
	p1 = allocPerson();
	printf("%s\n", p1->name);
	printf("%d\n", p1->age);

	return 0;
}