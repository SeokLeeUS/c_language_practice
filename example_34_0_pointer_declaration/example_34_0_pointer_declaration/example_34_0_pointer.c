#include <stdio.h>
int main()
{
	int x = 10;
	int * p_add;
	p_add = &x;
	*p_add = 20;
	printf("%p\n", p_add);
	printf("%p\n", &x);
	printf("%d\n", *p_add);
	printf("%d\n", x);

	return 0;
}