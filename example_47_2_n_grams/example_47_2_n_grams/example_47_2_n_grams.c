#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	char *c1 = malloc(sizeof(char) * 30);
	strcpy(c1, "this is c class");
	char *chrptr1[20] = { NULL, };
	/*  char *chrptr1[20] = { NULL, };    // 자른 문자열의 포인터를 보관할 배열, NULL로 초기화*/

	char *chrptr2 = strtok(c1, " ");
	int i = 0;
	while (chrptr2 != NULL)
	{
		chrptr1[i] = chrptr2;
		printf("%s\n", chrptr2);
		chrptr2 = strtok(NULL, " ");
		i++;
	}

	printf("%d\n", i);
	printf("%s %s\n", chrptr1[0], chrptr1[1]);

	for (int j = 0; j < i - 1; j++)
		printf("%s %s\n", chrptr1[j], chrptr1[j + 1]);

	return 0;
}