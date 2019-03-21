#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);

	printf("%s", num1&&num2 ? "참" : "거짓");
	printf("%s", num1 || num2 ? "참" : "거짓");
	printf("%s", !num1 ? "참" : "거짓");
	return 0;
}

