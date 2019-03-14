#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push,1)
struct Data {
	int num1;
	char *c2[20];
	float num2;
	short num3;
	char c1;
};
#pragma pack(pop)

int main()
{
	struct Data d1;
	FILE *fp = fopen("data2.bin", "rb");
	fread(&d1, sizeof(d1), 1, fp);
	printf("%d %s %d %d %c\n", d1.num1, d1.c2, d1.num2, d1.num3,d1.c1);
	fclose(fp);
	return 0;
}