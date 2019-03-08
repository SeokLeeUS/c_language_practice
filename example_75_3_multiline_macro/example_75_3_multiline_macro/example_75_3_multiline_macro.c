#include <stdio.h>

#define PRINT_NUM3(x) printf("%d\n",x);\
					  printf("%d\n",x+1);\
					  printf("%d\n",x+2);

int main()
{
	PRINT_NUM3(10);

	

	int i = 1;

	if (i == 2)

		PRINT_NUM3(10);

	if (i == 2)
	{
		PRINT_NUM3(10);
	}
	return 0;
}


/*
if 조건문뿐만 아니라 for, while 반복문도 
여러 줄로 된 매크로를 사용할 때는 
반드시 중괄호로 묶어주어야 합니다.
*/