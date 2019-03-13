#include <stdio.h>
int sum(int n)
{
	if (n == 5)
		return 5;// this is very important.
	return n+sum(n+1);
}

int main()
{
	printf("%d\n", sum(1));
}


/*
factorial 함수의 핵심은 반환값 부분입니다. 
계산 결과가 즉시 구해지는 것이 아니라 
재귀호출로 n - 1을 계속 전달하다가 
n이 1일 때 비로소 1을 반환하면서 
n과 곱하고 다시 결괏값을 반환합니다. 
그 뒤 n과 반환된 결과값을 곱하여 
다시 반환하는 과정을 반복합니다.
*/