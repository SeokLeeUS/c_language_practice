#include <stdio.h>
int main()
{
	int num1 = 10;
	int *numPtr1;
	numPtr1 = &num1;

	char c1 = 'a';
	char *cPtr1;
	cPtr1 = &c1;

	void *ptr; /* void pointer cann't be reversely referred as it doesn't define the size*/

	ptr = numPtr1;
	ptr = cPtr1;

	printf("%d\n", *ptr);


	return 0;
}