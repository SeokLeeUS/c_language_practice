#include <stdio.h>
#define ARRAY_SIZE 10
#define COUNT 20
int main()

{
	char s1[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		s1[i] = 97 + i;
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%c ", s1[i]);
	}
	printf("\n");

	printf("%d\n", COUNT);
	
#undef COUNT
#define COUNT 10

	printf("%d\n", COUNT);



	return 0;
}

/*
이처럼 연관되는 값이 계속 사용될 때는
값을 일일이 입력하기 보다는 매크로를
정의하여 사용하는 것이 좋습니다.
만약 배열 s1 크기를 변경하고 싶다면
#define 부분의 10을 수정하면
ARRAY_SIZE 매크로가 사용된 부분에 일괄 적용됩니다.
즉, 코드가 길어지고 복잡해졌을 때
코드 입력 실수를 줄일 수 있습니다.
*/
