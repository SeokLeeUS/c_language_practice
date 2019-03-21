#include <stdio.h>
#include <stdlib.h>

int main()
{
	int in1 = 20;
	int *intPtr1;
	int in2 = 30;
	int *intPtr2;

	intPtr1 = &in1;
	intPtr2 = malloc(sizeof(int));

	printf("%p\n", intPtr1);
	printf("%p\n", intPtr2);

	free(intPtr2);
	return 0;
}