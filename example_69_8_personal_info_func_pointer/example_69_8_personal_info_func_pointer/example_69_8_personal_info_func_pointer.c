#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
	char name[30];
	int age;
	void(*print)(struct Person *);
};

void print(struct Person *p)
{
	printf("%s %d\n", p->name, p->age);
}

void executer(void(*fp[])(struct Person *), struct Person p[], int count)
{
	for (int i = 0; i < count; i++)
	{
		fp[i](&p[i]);
	}
}

void (*getPrintFunc(struct Person *p))(struct Person *)
{
	return p->print;
}


/*
scanf로 구조체 배열 p에 3명의 인적 정보가 저장되고, 
배열 요소의 멤버 print에 print 함수의 메모리 주소가 저장됩니다. 
그리고 getPrintFunc 함수에서 반환된 값을 
함수 포인터 배열 fp에 저장하고 있습니다.

여기서 getPrintFunc 함수는 &p[i]와 같이 
Person 구조체의 메모리 주소를 매개변수로 받습니다. 
그리고 반환값은 없으며 Person 구조체 포인터를 
매개변수로 받는 함수 포인터를 반환하므로 
void (*getPrintFunc(struct Person *p))(struct Person *)와 
같이 함수를 만들어주고, 
함수 안에서는 구조체 포인터 p의 멤버 print를

*/

int main()
{
	struct Person p[3];
	p[0].print = print;
	p[1].print = print;
	p[2].print = print;
	
	scanf("%s %d %s %d %s %d",
		p[0].name, &p[0].age,
		p[1].name, &p[1].age,
		p[2].name, &p[2].age
	);

	void(*fp[3])(struct Person *);

	for (int i = 0; i < sizeof(p) / sizeof(struct Person); i++)
	{
		fp[i] = getPrintFunc(&p[i]);
	}

	return 0;


}
