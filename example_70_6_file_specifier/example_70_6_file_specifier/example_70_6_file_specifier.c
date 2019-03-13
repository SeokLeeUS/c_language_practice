#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "hello";
	FILE *fp = ("hello.txt", "w");
	fputs(s1, fp);
	fclose(fp);
	return 0;
}


/*
먼저 fopen 함수에 파일 이름은 "hello.txt", 
파일 모드는 "w"로 지정하여 새 파일을 생성합니다. 
그리고 fputs 함수에 문자열 포인터 s1과 파일 포인터 fp를 
지정하여 문자열을 파일에 저장합니다. 
또는, fwrite 함수에 문자열 포인터 
s1과 문자열의 길이, 쓰기 횟수 1, 
파일 포인터 fp를 지정하여 문자열을 
파일에 저장해도 됩니다.

fwrite(s1,strlen(s1),1,fp);

*/