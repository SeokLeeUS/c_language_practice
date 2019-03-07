#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
표준 입력으로 길이 60 이하의 인터넷 도메인이 입력됩니다. 점을 기준으로 문자열을 분리하여 각 줄마다 출력하세요.
정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.
*/

int main()
{
	char *s1 =malloc(sizeof(char)*30);
	scanf("%s", s1);
	char *str_ptr = strtok(s1, ".");
	while (str_ptr != NULL)
	{
		printf("%s\n", str_ptr);
		str_ptr = strtok(NULL, "."); /*search NULL and set it as another starting point*/
	}
	return 0;
}