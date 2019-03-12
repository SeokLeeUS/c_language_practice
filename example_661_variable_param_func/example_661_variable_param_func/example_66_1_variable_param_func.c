/*
함수에서 가변 인자를 정의할 때는
고정 매개변수가 한 개 이상 있어야 하며
고정 매개변수 뒤에 ...을 붙여
매개변수의 개수가 정해지지 않았다는
표시를 해줍니다. 단, ... 뒤에는
다른 매개변수를 지정할 수 없습니다.
*/

#include <stdio.h>
#include <stdarg.h>  // va_list, va_start, va_arg, va_end가 정의된 헤더 파일
void printNumbers(int args, ...)
{
	va_list ap; // 가변인자 목록 포인터
	va_start(ap, args); //가변인자 포인터 설정
	for (int i = 0; i < args; i++)
	{
		int num = va_arg(ap, int);
		printf("%d ", num);
	}
	va_end(ap);
	printf("\n");
}

int main()
{
	printNumbers(1, 10);
	printNumbers(2, 10, 20);
	printNumbers(3, 10, 20, 30);

	return 0;
}

/*
...으로 들어온 가변 인자를 사용하려면 
stdarg.h 헤더 파일에 정의된 매크로를 이용해야 합니다. 
따라서 #include로 stdarg.h 헤더 파일을 포함해줍니다. 
stdarg.h에 정의된 가변 인자 처리 매크로는 다음과 같습니다.

va_list: 가변 인자 목록. 가변 인자의 메모리 주소를 저장하는 포인터입니다.
va_start: 가변 인자를 가져올 수 있도록 포인터를 설정합니다.
va_arg: 가변 인자 포인터에서 특정 자료형 크기만큼 값을 가져옵니다.
va_end: 가변 인자 처리가 끝났을 때 포인터를 NULL로 초기화합니다.

*/


