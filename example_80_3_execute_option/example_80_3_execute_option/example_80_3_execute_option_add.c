#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result = 0;

	for (int i = 1; i < argc; i++)
	{
		result+=atoi(argv[i]);
	}

	printf("%d\n", result);

	return 0;
}

/*
argv[0]은 실행 파일 이름(경로)이므로 
무시해도 됩니다. 따라서 반복문으로 반복할 때 
1부터 argc보다 작을 때 까지만 반복합니다. 
그리고 argv[1]과 argv[2]는 문자열이므로 
atoi 함수로 문자열을 정수로 변환한 뒤 
반환값을 result 변수에 계속 더해서 저장하면 됩니다.
*/