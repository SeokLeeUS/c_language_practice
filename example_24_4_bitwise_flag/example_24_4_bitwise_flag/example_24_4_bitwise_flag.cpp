#include <stdio.h>

int main()
{

	unsigned char flag = 0;

	flag |= 1;
	flag |= 2;
	flag |= 4;

	printf("%u\n", flag);

	if (flag & 1)

		printf("0000 0001 is turned on\n");

	else
		printf("0000 0001 is not turned on\n");


	if (flag & 8)

		printf("0000 1000 is turned on\n");
	else
		printf("0000 1000 is not turned on\n");
	
	return 0;
}