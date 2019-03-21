#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main()
{
	int num1;
	scanf_s("input %d", &num1);
	if (num1 <18)
	{
		printf("청소년 관람불가");
	}
	return 0;
}