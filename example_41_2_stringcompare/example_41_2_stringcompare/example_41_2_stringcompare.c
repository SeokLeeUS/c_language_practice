#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 10);
	char s2[10];
	scanf("%s%s", s1, s2);
	int r = strcmp(s1, s2);
	int lenstrS1 = strlen(s1);
	int lenstrS2 = strlen(s2);
	switch (r)
	{
	case(-1):
		printf("%d means, %s is greater than %s. length of string is %d for %s, %d for %s\n",r, s2, s1,lenstrS1,s1,lenstrS2,s2);
		break;
	case(0):
		printf("%d means, %s is equal to %s.length of string is %d for %s, %d for %s\n",r, s1, s2,lenstrS1,s1,lenstrS2,s2);
		break;
	case(1):
		printf("%d means, %s is greater than %s.length of string is %d for %s, %d for %s\n",r, s1, s2,lenstrS1,s1,lenstrS2,s2);
		break;
	}

	/*printf("%d%d", lenstrS1, lenstrS2);*/

	return 0;

}