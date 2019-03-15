#include <stdio.h>
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}

/*
Win + R을 누른 뒤 cmd.exe를 입력하여 명령 프롬프트를 실행합니다. 그리고 프로젝트 디렉터리의 Debug 디렉터리로 이동한 뒤 다음과 같이 실행합니다(c:\project\option\Debug).

c:\Users\dojang>cd c:\project\option\Debug
c:\project\option\Debug>option.exe Hello C Language
option.exe
Hello
C
Language
option.exe에 Hello, C, Language이라는 옵션을 지정했습니다. 이 상태로 실행을 해보면 실행 파일 이름과 옵션이 그대로 출력됩니다.

main 함수에서 첫 번째 매개변수 argc는 옵션의 개수이며 argv는 옵션 문자열의 배열입니다.

int main(int argc, char *argv[])
다음과 같이 반복문을 사용하여 옵션 개수만큼 반복하면서 argv를 순서대로 출력했기 때문에 실행할 때 지정한 모든 옵션이 출력됩니다.

for (int i = 0; i < argc; i++)    // 옵션의 개수만큼 반복
{
printf("%s\n", argv[i]);      // 옵션 문자열 출력
}
여기서 argv에 저장되는 옵션의 내용은 다음과 같습니다.

▼ 표 80‑1 인덱스별 argv 내용
인덱스	argv
0	실행 파일 이름으로 실행했다면 실행 파일.
예) option.exe

실행 파일 경로로 실행했다면 실행 파일 경로
예) c:\project\option\Debug\option.exe
1	첫 번째 옵션
2	두 번째 옵션
…	…
n	n 번째 옵션

*/