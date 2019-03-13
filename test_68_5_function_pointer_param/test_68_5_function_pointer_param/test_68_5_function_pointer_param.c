#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int add(int *a, int *b)
{
	return *a + *b;
}

int sub(int *a, int *b)
{
	return *a - *b;
}

int mul(int *a, int *b)
{
	return *a * *b;
}

int div(int *a, int *b)
{
	return *a / *b;
}

int main()
{
	char funcName[10];
	int num1, num2;

	scanf("%s %d %d", funcName, &num1, &num2);
	int(*fp)(int *, int *);
	if (strcmp(funcName,"add")==0)
	{
		fp = add;
	}
	else if(strcmp(funcName, "sub") == 0)
	{
		fp = sub;
	}
	else if(strcmp(funcName, "mul") == 0)
	{
		fp = mul;
	}

	else if (strcmp(funcName, "div") == 0)
	{
		fp = div;
	}

	printf("%d\n", fp(&num1, &num2));

	return 0;
}

/*
문자열로 "add", "sub", "mul", "div"
가 입력되더라도 모두 fp로 호출해서 계산해야 합니다. 
먼저 add, sub, mul, div 함수는 매개변수가 
int 포인터 두 개, 반환값이 int이므로 int (*fp)(int *, int *);
와 같이 함수 포인터를 만들어줍니다. 
그리고 strcmp 함수로 funcName과 
함수 이름 문자열 "add", "sub", "mul", "div"을 
각각 비교하여 일치하면 fp에 해당 함수의 주소를 넣어주면 됩니다.
*/