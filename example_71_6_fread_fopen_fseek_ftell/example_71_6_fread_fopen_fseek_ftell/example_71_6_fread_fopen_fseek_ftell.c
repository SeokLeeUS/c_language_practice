#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getFileSize(FILE *fp)
{
	int size;
	int currPos = ftell(fp);
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, currPos, SEEK_SET);

	return size;
}

int main()
{
	char *buffer;
	int size;
	FILE *fp = fopen("hello.txt", "r");
	size = getFileSize(fp);
	buffer = malloc(size+1);
	memset(buffer,0,size+1);

	/*
	파일 크기를 구했다면 버퍼를 생성합니다. 
	이때 파일에서 읽은 문자열을 
	C 언어 문자열로 표현해야 하므로 
	문자열 마지막의 NULL이 들어갈 공간까지 
	확보해야 합니다. 따라서 할당할 메모리의 
	크기는 size + 1입니다. 그리고 memset 함수에
	초기화할 값은 0, 크기는 size + 1을 지정하여
	이전에 사용하던 메모리 값을 0으로 초기화해 줍니다.
	*/

	fread(buffer, size, 1, fp);
	printf("%s\n", buffer);
	fclose(fp);
	free(buffer);

	return 0;
}