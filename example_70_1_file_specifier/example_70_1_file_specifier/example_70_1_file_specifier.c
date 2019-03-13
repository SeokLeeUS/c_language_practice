#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
int main()
{
	FILE *fp = fopen("hello.txt", "w");
	// hello.txt 파일을 쓰기 모드(w)로 열기
	// 파일 포인터 반환
	fprintf(fp, "%s %d by fprintf\n", "Hello", 100);
	fclose(fp); //파일 포인터 닫기


	char s1[10];
	int num1;
	FILE *fpr = fopen("hello.txt", "r");
	fscanf(fpr, "%s %d", s1, &num1);
	printf("%s %d\n", s1, num1);
	fclose(fpr);

	FILE *fprr = fopen("hello.txt", "a+");
	fputs("hello world by fputs!!",fprr);
	fclose(fprr);

	char *s2 = "hello, world! by fwrite";
	FILE *fprrr = fopen("hello.txt", "a+");
	fwrite(s2, strlen(s2), 1, fprrr);
	fclose(fprrr);

	char buffer1[20];
	FILE *fpgets = fopen("hello.txt", "r");
	fgets(buffer1, sizeof(buffer1), fpgets);
	printf("%s\n", buffer);
	fclose(fpgets);


	char buffer2[20] = { 0, };
	FILE *fpread = fopen("hello.txt", "r");
	fread(buffer2, sizeof(buffer2), 1, fpread);
	printf("%s\n", buffer);
	fclose(fpread);

	/*
	파일을 읽을 때 사용할 임시 공간(버퍼)를 
	선언해야 하는데 fread 함수를 사용할 때는 
	char 배열을 선언한 뒤 반드시 0으로 
	초기화해야 합니다(char 포인터에 동적 
	메모리를 할당한 뒤 0으로 초기화해도 됩니다).
	*/

	return 0;
}

/*
"r"	읽기 전용	파일을 읽기 전용으로 엽니다. 단, 파일이 반드시 있어야 합니다.
"w"	쓰기 전용	새 파일을 생성합니다. 만약 파일이 있으면 내용을 덮어씁니다.
"a"	추가	파일을 열어 파일 끝에 값을 이어 씁니다. 만약 파일이 없으면 파일을 생성합니다.
"r+"	읽기/쓰기	파일을 읽기/쓰기용으로 엽니다. 단, 파일이 반드시 있어야 하며 파일이 없으면 NULL을 반환합니다.
"w+"	읽기/쓰기	파일을 읽기/쓰기용으로 엽니다. 파일이 없으면 파일을 생성하고, 파일이 있으면 내용을 덮어씁니다.
"a+"	추가(읽기/쓰기)	파일을 열어 파일 끝에 값을 이어 씁니다. 만약 파일이 없으면 파일을 생성합니다. 읽기는 파일의 모든 구간에서 가능하지만, 쓰기는 파일의 끝에서만 가능합니다.
t	텍스트 모드	파일을 읽거나 쓸 때 개행문자 \n와 \r\n을 서로 변환합니다.
^Z 파일의 끝으로 인식하므로 ^Z까지만 파일을 읽습니다(^Z는 Ctrl+Z 입력을 뜻합니다).
b	바이너리 모드	파일의 내용을 그대로 읽고, 값을 그대로 씁니다.

*/
