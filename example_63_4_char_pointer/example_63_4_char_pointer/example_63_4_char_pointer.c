#include <stdio.h>
void helloString(char *s1)
{
	printf("Hello %s\n", s1);
}


void helloString1(char s1[])
{
	printf("Hello %s\n", s1);
}

int main()
{

	helloString("world!");

	char s1[10] = "world!!";
	helloString(s1);

	helloString1("world");
	return 0;
}