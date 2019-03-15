#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

extern struct Person *p1;

int main()
{
	p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "seok");
	p1->age = 30;
	strcpy(p1->address, "upland");

	printf("%s %d %s\n", p1->name, p1->age, p1->address);

	free(p1);

	return 0;
}

/*
main 함수에서 전역 변수p1을 사용하고 있습니다. 
하지만 p1은 print.c에 선언되어 있으므로 
main 함수에서 사용하려면 extern struct Person *p1;
과 같이 p1이 외부에 있다는 것을 표시해주면 됩니다.
*/