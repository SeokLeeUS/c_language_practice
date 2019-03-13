#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("hello.txt", "w");
	// hello.txt 파일을 쓰기 모드(w)로 열기
	// 파일 포인터 반환
	fprintf(fp, "%s %d\n", "Hello", 100);
	fclose(fp); //파일 포인터 닫기
	return 0;
}

