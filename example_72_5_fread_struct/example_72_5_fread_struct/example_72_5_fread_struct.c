#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push,1)

struct Point2D
{
	float x;
	float y;
};

struct RectangleFileFormat {
	short magic;
	int version;
	struct Point2D p1;
	struct Point2D p2;
	char desc[30];
};
#pragma pack (pop)

/*
구조체의 정렬 크기를 조절하려면 
컴파일러에서 제공하는 지시자를 사용해야 합니다.

Visual Studio, GCC 4.0 이상
#pragma pack(push, 정렬크기)
#pragma pack(pop)
*/

int main()
{
	struct RectangleFileFormat rf;
	FILE *fp = fopen("rect.bin","wb");
	fread(&rf, sizeof(rf), 1, fp);
	printf("%d %d %f %f %f %f %s\n", rf.magic, rf.version, rf.p1.y, rf.p2.x, rf.p2.y, rf.desc);
	fclose(fp);

	return 0;
}

/*
파일의 내용을 읽어서 
구조체에 저장하려면 파일을 
바이너리 모드로 열어야 하므로 
fopen 함수에 파일 모드를 "rb"로 지정합니다. 
그리고 fread 함수는 
fread(&rf, sizeof(rf), 1, fp);와 같이 
버퍼에는 구조체 변수 rf의 주소, 
읽기 크기에는 구조체 변수의 크기, 
읽기 횟수에는 1을 넣어주면 됩니다.
*/