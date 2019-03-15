#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(push,1)
struct X850Firmware{
	short serial;
	char mode;
	char desc[20];
	int version;
};
#pragma pack(pop)

int main()
{
	FILE *fp = fopen("x850.bin", "rb");
	struct X850Firmware X850;
	fread(&X850, sizeof(X850), 1, fp);
	printf("%d\n%c\n%s\n%d\n", X850.serial, X850.mode, X850.desc, X850.version);    // a 32100 2100000100 Hello, world!
	fclose(fp);    // 파일 포인터 닫기
	
	return 0;
}

/*
fopen 함수에 파일 모드를 "rb"로 지정하여
x850.bin 파일을 바이너리 모드로 엽니다.
그리고 fread 함수는 fread(&x1, sizeof(x1), 1, fp);
와 같이 버퍼에는 구조체 변수 x1의 주소, 읽기 크기에는
구조체 변수의 크기, 읽기 횟수에는 1을 넣어줍니다.

파일 내용을 다 읽었다면 printf 함수로
구조체 멤버를 각 줄에 출력해주면 됩니다.
*/