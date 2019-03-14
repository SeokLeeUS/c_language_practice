﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp)
{
	int size;
	int currPos = ftell(fp);
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, currPos, SEEK_SET);
	return size;
}

char *getData(int offset, int size, int *count, FILE *fp)
{
	char *buffer;
	buffer = malloc(size + 1);
	memset(buffer, 0, size+1);
	fseek(fp, offset, SEEK_SET);
	*count = fread(buffer, sizeof(char), size, fp);
	return buffer;
}

/*
etData 함수는 char *getData(int offset, int size, int *count, FILE *fp)
와 같이 정의되어 있고, 
파일을 읽을 위치 offset, 
읽을 크기 size, 읽은 크기(횟수) count 포인터,
파일 포인터를 받은 뒤 buffer를 반환하고 있습니다.

파일 크기가 주어졌으므로 
먼저 버퍼 buffer를 생성합니다. 
이때 파일에서 읽은 문자열을 C 언어 
문자열로 표현해야 하기 때문에 문자열 마지막의 NULL이 
들어갈 공간까지 확보해야 합니다. 
따라서 malloc으로 할당할 메모리의 크기는 
size + 1입니다. 그리고 memset 함수에 
초기화할 값은 0, 크기는 size + 1을 지정하여 
이전에 사용하던 메모리 값을 0으로 초기화합니다.

이제 파일을 읽을 위치를 정해주어야 하므로 
fseek 함수에 이동할 크기는 offset, 
기준점은 SEEK_SET을 지정합니다. 
그리고 fread 함수에서 읽은 크기만큼 
반환값이 나올 수 있도록 읽기 크기는 
sizeof(char)를 지정하여 1바이트, 읽기 횟수는 
size을 지정하여 파일의 내용을 읽으면 됩니다. 
그리고 count의 값을 바깥에서도 사용할 수 있도록 
count를 역참조하여 fread에서 반환된 값을 넣어줍니다.

마지막으로 파일의 내용을 읽은 buffer를 반환해주면 됩니다.
*/


int main()
{
	char *buffer;
	int size;
	int count;

	FILE *fp = fopen("words.txt", "r");
	size = getFileSize(fp);
	buffer = getData(0, size, &count, fp);
	printf("%s\n", buffer);
	printf("%d", count);
	fclose(fp);
	free(buffer);

	return 0;
}
