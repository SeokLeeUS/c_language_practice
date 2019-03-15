#include <stdio.h>

int main()
{

	unsigned char i = 1;
	while (i!=0)
	{
		printf("%u\n", i);
		i <<= 1;
	}
}