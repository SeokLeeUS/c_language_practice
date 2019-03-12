#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int getQuotientAndRemainder(int num1,int num2,int *rem)
{
	int quotient = num1 / num2;
	*rem = num1%num2;
	return (quotient);
}


/*
함수에서 반환값으로도 값을 
꺼내오고 매개변수로도 값을 꺼내오는 문제입니다.
먼저 scanf로 변수 num1과 num2에 
두 정수가 저장됩니다. 그다음에 
getQuotientAndRemainder 함수를 호출할 때 
입력된 숫자를 저장한 변수 num1과 num2는 
그대로 넣고 나머지를 저장할 변수 
remainder는 변수의 주소를 넣었습니다. 
따라서 첫 번째, 두 번째 매개변수는 
함수에 값을 전달하는 용도이고 
세 번째 매개변수는 값을 꺼내오는 용도입니다.
*/



int main()
{
	int num1;
	int num2;
	int quotient;
	int remainder;

	scanf("%d %d", &num1, &num2);
	quotient = getQuotientAndRemainder(num1, num2, &remainder);
	printf("%d %d\n", quotient, remainder);
	return 0;
}