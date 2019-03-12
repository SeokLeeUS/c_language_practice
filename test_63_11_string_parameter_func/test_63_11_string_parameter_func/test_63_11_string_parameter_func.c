#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFullName(char *c1, char *c2)
{
	printf("%s%s\n", c1, c2);
}

int main()
{
	char familyName[31];
	char givenName[31];
	scanf("%s %s", familyName, givenName);
	printFullName(familyName, givenName);
	return 0;
}

/*
scanf로 familyName과 givenName
에 성과 이름 문자열이 저장됩니다. 
여기서 printFullName(familyName, givenName);
와 같이 호출하여 성과 이름을 붙인 전체 이름을 출력해야 합니다.

함수 printFullName은 
void printFullName(char *familyName, char *givenName)
과 같이 매개변수를 char 포인터 두 개로 지정해주고, 
함수 안에서는 printf에서 서식 지정자 %s를 
두 개 붙여서 매개변수를 출력해주면 됩니다.

*/