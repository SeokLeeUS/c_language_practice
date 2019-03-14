#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp = fopen("words.txt", "r");
	int count = 0;
	//int total = 0;
	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	char *buffer;
	buffer = malloc(size+1);

	memset(buffer, 0, size + 1);
	fseek(fp, 0, SEEK_SET);
	count = fread(buffer, sizeof(char), size, fp);
	//printf("%s\n", buffer);

	//fseek(fp, 0, SEEK_END);
	for (int i = size -1; i>=0 ; i--)
	{
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	}

	fclose(fp);

	return 0;
}

/*
char 포인터로 버퍼 buffer를 선언하고, 
파일 크기만큼 동적 메모리를 
할당한 뒤 파일을 읽습니다. 
그리고 for 반복문에서 파일 크기 - 1부터 
0까지 반복하면서 fwrite로 &buffer[i]를 
sizeof(char) 1바이트 크기로 1번씩 
stdout에 저장해주면 됩니다.

특히 fwrite는 버퍼로 포인터를 받으므로 
&buffer[i]와 같이 앞에 &를 붙여서 
해당 요소의 주소(포인터)를 넣어야 합니다.

*/