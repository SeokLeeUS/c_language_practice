/*
extern		데이터 섹션(초기화)
BSS			섹션(비초기화)	프로그램		0	프로그램 시작부터 종료까지
auto		스택	블록	초기화되지 않음			블록 시작부터 종료까지
static		데이터 섹션(초기화)
BSS			섹션(비초기화)	블록 또는 파일	0	프로그램 시작부터 종료까지
register	CPU 레지스터	블록	초기화되지 않음	블록 시작부터 종료까지
*/

/*
자동 변수는 변수를 선언할 때 
앞에 auto 키워드를 붙입니다. 
단, 전역 변수에는 auto 
키워드를 붙일 수 없습니다.
*/

void increaseNumber()
{
	static int num2 = 0;
	printf("%d\n", num2);
	num2++;
}


#include <stdio.h>

static void print()
{
	printf("main.c\n");
}

int main()
{
	auto int num1 = 10;
	printf("%d\n", num1);

	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}

/*
정적 변수는 초깃값을 지정하지 않으면 
0으로 초기화됩니다. 특히 정적 변수를 
전역 변수로 선언했든 지역 변수로 선언했든 
상관없이 초깃값을 지정하지 않으면 0으로 초기화됩니다. 
그리고 정적 변수(전역, 지역)는 
프로그램이 시작될 때 생성 및 초기화되고 
프로그램이 끝날 때 사라집니다.
*/

/*
변수를 선언할 때 앞에 register를 붙이면 
변수는 메모리 대신 CPU의 레지스터를 사용합니다. 
따라서 일반 변수보다 속도가 빠릅니다. 
단, 레지스터는 개수가 한정되어 있으므로 
register를 붙인다고 해서 
모두 레지스터를 사용하지는 않습니다.
register 자료형 변수이름;
*/