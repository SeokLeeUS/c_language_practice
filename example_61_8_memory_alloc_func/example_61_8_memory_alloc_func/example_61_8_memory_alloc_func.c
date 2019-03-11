#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *allocMemory()
{
	void *ptr = malloc(100);

	return ptr;
}

/*
함수 allocMemory을 호출하여
반환된 포인터에 문자열을 복사해서
출력하고 있으며 반환된 포인터를
free 함수로 해제하고 있습니다. 
따라서 allocMemory 함수 안에서
malloc 함수로 메모리를 할당한 뒤
포인터를 반환해주면 됩니다. 단, void *allocMemory()와 같이
함수의 반환값 자료형은 void 포인터이므로 
메모리를 할당할 포인터도 void 포인터로 선언합니다
*/

int main()
{
	char *s1;
	s1 = allocMemory();
	strcpy(s1, "Uranus");
	printf("%s\n", s1);
	free(s1);
	
	return 0;
}