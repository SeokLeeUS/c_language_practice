#include <stdio.h>

#define MUL(a,b) a*b
#define ADD(a,b) a+b

int main()
{
	printf("%d\n", MUL(10, 20));
	printf("%d\n", MUL(1 + 2, 3 + 4));

	printf("%d\n", ADD(1, 2));
	printf("%d\n", ADD(1, 2) * 3);
		

#undef MUL //매크로 해제
#undef ADD

#define MUL(a,b) ((a)*(b))
#define ADD(a,b) ((a)+(b))

	printf("%d\n", MUL(10, 20));
	printf("%d\n", MUL(1 + 2, 3 + 4));

	printf("%d\n", ADD(1, 2));
	printf("%d\n", ADD(1, 2) * 3);

	return 0;
}