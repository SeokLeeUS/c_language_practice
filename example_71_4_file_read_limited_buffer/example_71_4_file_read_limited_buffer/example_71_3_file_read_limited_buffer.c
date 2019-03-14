#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[5] = { 0, };
	int count = 0;
	int total = 0;

	FILE *fp = fopen("hello.txt", "r");

	while (feof(fp) == 0)
	{
		count = fread(buffer, sizeof(char), 4, fp);
		printf("%s", buffer);
		memset(buffer, 0, 5);
		total += count;
	}
	printf("\ntotal: %d\n", total);
	fclose(fp);

	return 0;
}

/*
참고 | feof 함수와 EOF
feof 함수는 현재 파일 포인터의 
위치가 파일의 끝이면 1, 
파일의 끝이 아니면 0을 반환하므로 
-1인 EOF와는 상관이 없습니다. 
EOF는 scanf, fscanf 등의 함수에서 
값을 읽을 수 없는 상태일 때 반환됩니다.
*/