/*
C 언어에서 함수를 사용하다 보면 printf, scanf같이 
매개변수의 개수가 정해지지 않은 함수가 있습니다. 
이렇게 매번 함수에 들어가는 인수(argument)의 
개수가 변하는 것을 가변 인자
(가변 인수, variable argument)라고 합니다.

이번에는 가변 인자 함수를 직접 만들어보겠습니다. 
참고로 가변 인자는 개념이 다소 어렵고 
사용할 일이 많지 않으므로 
완벽하게 이해하지 않아도 됩니다.
*/


/*
va_list: 가변 인자 목록. 가변 인자의 메모리 주소를 저장하는 포인터입니다.
va_start: 가변 인자를 가져올 수 있도록 포인터를 설정합니다.
va_arg: 가변 인자 포인터에서 특정 자료형 크기만큼 값을 가져옵니다.
va_end: 가변 인자 처리가 끝났을 때 포인터를 NULL로 초기화합니다.
*/

/*
단, 정수 이외의 자료형은 합을 구하지 않는다고 
해서 va_arg 매크로를 사용하지 않으면 
가변 인자 포인터 ap가 다음 인자로 이동하지 않게 됩니다. 
이렇게 되면 다음 값을 가져올 수 없으므로 주의해야 합니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int getSum(char *type, ...)
{
	int sum = 0;
	int i = 0;
	va_list ap;
	va_start(ap, type);

	while (type[i] != '\0')
	{
		switch (type[i])
		{
		case 'i':
			sum = sum + va_arg(ap, int);
			break;
		case 's':
			va_arg(ap, char *);
			break;
		case 'd':
			va_arg(ap, double);
			break;
		default:
			break;
		}

		i++;
	}
	va_end(ap);
	return (sum);
	printf("\n");

}



int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d\n", getSum("isi", num1, "C", 10));
	printf("%d\n", getSum("sdsi", "Hello, world!", 5.3, "A", num2));
	printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
	printf("%d\n", getSum("sidii", "Hello, C", num3, 2.234567, 878, 1291));

	return 0;
}