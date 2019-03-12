#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

long long getsum(char *types, ...)
{
	va_list ap;
	int i = 0;
	long long result = 0;

	va_start(ap, types);

	while (types[i] != '\0')
	{
		switch (types[i])
		{
		case 's':
			result = result + atoi(va_arg(ap, char *));
			break;
		case 'i':
			result = result + va_arg(ap, int);
			break;
		default:
			break;
		}
		i++;
	}
	va_end(ap);
	return result;
}

int main()
{
	printf("%lld\n", getsum("siis", "12", 3000, 500000, "300"));
	printf("%lld\n", getsum("ssi", "150", "150", 100));

	return 0;
}

/*
반복문에서 자료형 약칭 문자열 types의 
문자 개수만큼 반복하고 있는데 
types에 들어있는 문자를 하나하나 처리하려면 
switch (types[i])와 같이 switch 분기문을 지정해주면 됩니다.

자료형이 정수일 때는 값을 result 변수에 
계속 더해주면 되지만 문자열일 때는 
atoi(va_arg(ap, char *));처럼 atoi 함수를 사용하여 
문자열을 정수로 변환한 뒤 result 변수에 계속 더해주면 됩니다.
*/