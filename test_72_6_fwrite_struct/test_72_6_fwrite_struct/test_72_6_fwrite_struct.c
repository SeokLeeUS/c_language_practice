#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct X820Firmware {
	int serial;
	char desc[13];
	short tag;
	char mode;
};
#pragma pack(pop)

int main()
{
	struct X820Firmware x1;
	memset(&x1, 0, sizeof(x1));

	FILE *fp = stdout;

	x1.serial = 1800891002;
	strcpy(x1.desc, "X820 Firmware");
	x1.tag = 8512;
	x1.mode = '-';

	fwrite(&x1, sizeof(x1), 1, fp);

	fclose(fp);

	return 0;
}

/*
구조체 X820Firmware가 이미 정의되어 있고 
구조체 변수에 값도 들어가 있습니다. 
따라서 fwrite 함수로 쓰기만 하면 됩니다.

fwrite 함수의 버퍼에는 구조체 변수의 주소,
쓰기 크기에는 구조체 변수의 크기, 
쓰기 횟수에는 1을 넣으면 됩니다. 
fwrite 함수의 마지막에는 
파일 포인터 fp나 stdout을 넣습니다.


*/