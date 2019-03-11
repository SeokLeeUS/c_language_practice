#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum TYPE {
	TYPE_CHAR,
	TYPE_NUM,
	TYPE_FLOAT
};

void SwapAny(void *ptr1, void *ptr2, enum TYPE t)
{
	switch (t)
	{
	case TYPE_CHAR:
	{
		char temp;
		temp = *(char *)ptr2;
		*(char *)ptr2 = *(char *)ptr1;
		*(char *)ptr1 = temp;
		break;
	}

	case TYPE_NUM:
	{
		int temp;
		temp = *(int *)ptr2;
		*(int *)ptr2 = *(int *)ptr1;
		*(int *)ptr1 = temp;
		break;
	}

	case TYPE_FLOAT:
	{
		int temp;
		temp = *(float *)ptr2;
		*(float *)ptr2 = *(float *)ptr1;
		*(float *)ptr1 = temp;
		break;
	}
	}

}



int main()
{
	char c1 = 'a';
	char c2 = 'b';
	SwapAny(&c1, &c2, TYPE_CHAR);
	printf("%c %c\n", c1, c2);

	int num1 = 100;
	int num2 = 50;
	SwapAny(&num1, &num2, TYPE_NUM);
	printf("%d %d\n", num1, num2);

	float f1 = 10.3f;
	float f2 = 20.456f;
	SwapAny(&f1, &f2, TYPE_FLOAT);
	printf("%f %f\n", f1, f2);

	return 0;
}