#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	/*char s1[10];*/
/*
	char s1[30];
	printf("put the string:\n");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);

	int c1 = getchar();
	printf("%d\n", c1);
	printf("%d\n", EOF);
*/

	char *s1 = malloc(sizeof(char) * 10);
	printf("put your string:\n");
	scanf("%[^\n]s", s1);
	printf("%s\n", s1);
	return 0;
}