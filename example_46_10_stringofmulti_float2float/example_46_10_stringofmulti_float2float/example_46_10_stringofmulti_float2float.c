#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *s1 = "29.97713 4528.11";
	float num1;
	float num2;
	char *end;
	/* convert multiple floats in string to float numbers*/
	num1 = strtof(s1, &end);
	num2 = strtof(end, NULL);
	/*먼저 strtof(s1, &end);처럼 첫 번째 실수를 변환하고 끝 포인터를 구합니다. 그리고 strtof(end, NULL);처럼 앞에서 구한 끝 포인터를 이용하여 두 번째 실수를 변환합니다. 세 번째 실수는 없으므로 끝 포인터는 구하지 않아도 되기 때문에 NULL을 넣어주면 됩니다.*/


	printf("%f\n", num1);
	printf("%F\n", num2);

	return 0;
}