#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char name[31];
	int order;
	scanf("%s %d", name, &order);
	FILE *fp = stdout;
	fprintf(stdout,"The %dth Satellite of Jupiter: %s\n",order,name);
	fclose(fp);
	return 0;
}


/*
한 가지 특이한 점은 fprintf 함수로도 
화면에 문자열을 출력할 수 있다는 점인데 
stdout이라는 매크로를 활용하면 됩니다.

fprintf(stdout, "%s %d\n", "Hello", 100);   
// Hello 100: 서식을 지정하여 화면(stdout)에 문자열 출력
즉, fprintf(stdout, ...);은 printf 함수와 동작이 같습니다.
*/

