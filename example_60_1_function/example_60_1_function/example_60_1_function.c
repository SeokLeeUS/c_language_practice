#include <stdio.h>
void hello() 

/*여기서 함수의 반환값 부분에 
void를 적어주면 함수의 반환값이 없다는 뜻이 됩니다. 
즉, void는 함수의 반환값이 없음을 나타낼 때와 
포인터로 사용할 때의 의미가 다릅니다. 
이 부분을 잘 기억해두세요.*/

{
	int num1 = 10;
	printf("hello,world %d\n", num1);
}


/*
함수 안에 선언된 변수를
지역 변수라고 부르는데
이 지역 변수의 특징은
함수가 끝나면 사라진다는 점입니다.
*/

int main()
{

	hello();
	//printf("%d", num1);

	return 0;
}
