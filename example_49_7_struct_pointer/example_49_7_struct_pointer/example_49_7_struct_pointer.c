#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Item {
	char name[100];
	int price;
	bool limited;
};

int main()
{
	struct Item item1 = { "Berlin Beethoven",100000,false };
	struct Item *ptr;
	ptr = &item1;

	if (ptr->limited == true)
		printf("limited edition\n");
	else
		printf("ordinary\n");
	
	return 0;
}


/* example 49_3

struct Person p1;
struct Person *ptr;
ptr = &p1;
ptr->i = 30;

printf("age: %d\n", p1.i);
printf("age: %d\n", ptr->i);

return 0;
}
/*
구조체 포인터 p1의 멤버 x에 접근하는 방법
p1->x
*/