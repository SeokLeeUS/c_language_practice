#include <stdio.h>
#define PRINT_NUM(x) printf("%d\n",x)
#define printf
int main()
{
	PRINT_NUM(10);
	PRINT_NUM(20);


	printf("xxxx");
#undef printf 

	PRINT_NUM(10);
	PRINT_NUM(20);
	return 0;
}

/*
#define을 사용하면 함수가 아무 동작도 하지 않도록 만들 수 있습니다. 
다음과 같이 함수 이름으로 된 빈 매크로를 지정하면
이후에 해당 이름으로 함수를 호출해도 사용할 수 없게 됩니다.

#define printf    // printf를 빈 매크로로 정의

printf("Hello, world!");    // 아무것도 출력되지 않음
*/