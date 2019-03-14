#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(push,1)

struct name {
	int num1;
	char *c2[20];
	float num2;
	short num3;
	char c1;
};

#pragma pack (pop)

int main()
{
	struct name n1;
	memset(&n1, 0, sizeof(n1));

	/*
	이제 구조체 변수를 선언한 뒤 
	각 멤버에 값을 저장합니다. 
	이때 구조체 변수는 반드시 
	memset 함수를 사용하여 0으로 초기화해 줍니다. 
	만약 0으로 초기화하지 않으면 
	배열 s1 부분에는 이전에 메모리에서 
	쓰던 값이 들어갈 수 있습니다.
	*/

	n1.num1 = 3;
	strcpy(n1.c2, "seok");
	n1.num2 = 30;
	n1.num3 = 400;
	n1.c1 = 'c';

	FILE *fp = fopen("data2.bin", "wb");
	fwrite(&n1, sizeof(n1), 1, fp);
	fclose(fp);

	return 0;
}