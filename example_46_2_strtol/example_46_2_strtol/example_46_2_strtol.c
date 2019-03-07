#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *s1 = "0xaf10";
	int num1;
	num1 = strtol(s1, NULL, 16);
	printf("%x %d\n", num1, num1);
	/*format specifier https://en.wikipedia.org/wiki/Printf_format_string */

	char *s2 = "0.1234";
	float f1;
	f1 = atof(s2);
	printf("%f\n", f1);

	char *s3 = "0.1245";
	char *end;
	double f2;
	f2 = strtod(s3,&end);
	printf("%f\n", f2);

	return 0;
}