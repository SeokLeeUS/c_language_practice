#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[40];
	float num1 = 98.415237f;
	int num2 = 0x3fce1920;


	sprintf(s1, "%f 0x%x", num1, num2);
	printf("%s\n", s1);

	return 0;
}

/*실수와 정수를 문자열로 변환한 뒤 출력하는 문제입니다. 먼저 98.415237와 0x3fce1920은 문자열로 변환했을 때 길이가 꽤 길므로 char s1[30];과 같이 배열의 크기를 넉넉하게 잡아줍니다.

sprintf 함수를 사용하여 num1과 num2를 문자열로 만듭니다. num1은 실수이므로 서식 지정자를 %f로 출력해주고, num2는 16진 정수이므로 %x로 출력해주고 앞에 "0x"를 붙이면 됩니다.*/