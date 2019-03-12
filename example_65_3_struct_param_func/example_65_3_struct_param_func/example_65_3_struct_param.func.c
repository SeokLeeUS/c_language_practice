#include <stdio.h>

struct Data {
	int num1;
	int num2;
};

void setData(struct Data d)
{
	d.num1 = 30;
	d.num2 = 40;
}

int main()
{
	struct Data d1;

	d1.num1 = 10;
	d1.num2 = 20;

	setData(d1);

	printf("%d\n", d1.num1);

	return 0;
}