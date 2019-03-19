#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	char *s1[30];
	sprintf(s1, "hello, %s","world");
	printf("%s\n", s1);

	char s2[20];
	sprintf(s2, "%dth %s", 9, "Symphony");
	printf("%s\n", s2);

	char s3[20];
	sprintf(s3, "%d%d%d%c%d", 10, 20, 30,'c', 99); /*create buffer memory to assign variable and make a string array*/
	printf("%s\n", s3);

	return 0;
}