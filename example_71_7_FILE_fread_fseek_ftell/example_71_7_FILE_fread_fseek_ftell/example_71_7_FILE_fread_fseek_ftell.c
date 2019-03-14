#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int readData(char *buffer, int offset, int size, FILE *fp)
{

	int count;
	if (feof(fp) == 1)
		return 0;

	fseek(fp,offset,SEEK_SET);
	count = fread(buffer,sizeof(char),size,fp);
	return count;
}

int main()
{
	char buffer[10] = { 0, };
	int count;
	FILE *fp = fopen("hello.txt", "r");
	count = readData(buffer, 9, 3, fp);
	printf("%s,count: %d\n", buffer, count);
	fclose(fp);

	return 0;
}

/*
파일에 저장된 "Hello, world!"에서 
"rld"만 읽으려면 파일 처음부터 
순방향으로 9바이트 지점에서 
3바이트만큼 읽어야 합니다. 
readData(buffer, 9, 3, fp);와 
같이 함수를 호출할 때 offset은 9, 
size는 3으로 지정하고 있으므로 
fseek 함수에 이동할 크기는 
offset, 기준점은 SEEK_SET을 지정해줍니다.

여기서 fread의 반환값이 3이 나오려면 
1바이트씩 3번 읽으면 됩니다. 
그러므로 fread 함수에 읽기 크기는 
sizeof(char)를 지정하여 1바이트, 
읽기 횟수는 size을 지정하여 
파일의 내용을 읽으면 됩니다.

*/