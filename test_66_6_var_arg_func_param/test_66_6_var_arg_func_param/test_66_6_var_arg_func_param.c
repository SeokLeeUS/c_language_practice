#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int sum(int args, ...)
{
	va_list ap;
	int result = 0;
	va_start(ap, args);
	for (int i = 0; i<args; i++)
		result = result + va_arg(ap, int);
	va_end(ap);
	return (result);
}

int main()
{
	int num1, num2;
	int num3, num4, num5;
	scanf("%d %d", &num1, &num2);
	scanf("%d %d %d", &num3, &num4, &num5);

	printf("%d\n", sum(2, num1, num2));
	printf("%d\n", sum(3, num3, num4, num5));

	return 0;
}

/*
sum 함수를 보면 int sum(int args, ...)과 
같이 매개변수가 가변 인자로 되어 있습니다. 
따라서 va_start 매크로를 사용하여 
가변 인자 목록 포인터를 사용할 수 있도록 설정합니다. 
그리고 반복문을 사용하여 가변 인자 개수(args)만큼 
반복하면서 va_arg로 가져온 값을 결괏값 변수 result에 계속 더합니다. 
여기서 sum에는 int형 변수를 넣고 있으므로 va_arg에는 int를 넣어줍니다.
가변 인자 처리가 끝났다면 va_end 매크로를 사용하여 
가변 인자 목록 포인터를 NULL로 초기화하고, 
결괏값 result를 반환하면 됩니다.
*/