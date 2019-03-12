#include <stdio.h>
#include <stdarg.h>

void printValues(char *type, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, type);
	while (type[i] != '\0')
	{
		switch (type[i])
		{
		case 'i':
			printf("%d ", va_arg(ap, int));
			break;
		case 'c':
			printf("%c ", va_arg(ap, char));
			break;
		case 's':
			printf("%s ", va_arg(ap, char *));
			break;
		case 'd':
			printf("%f ", va_arg(ap, double));
			break;
		default:
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

int main()
{
	printValues("i", 10);                                       // 정수
	printValues("ci", 'a', 10);                                 // 문자, 정수
	printValues("dci", 1.234567, 'a', 10);                      // 실수, 문자, 정수
	printValues("sicd", "Hello, world!", 10, 'a', 1.234567);    // 문자열, 정수, 문자, 실수

	return 0;
}