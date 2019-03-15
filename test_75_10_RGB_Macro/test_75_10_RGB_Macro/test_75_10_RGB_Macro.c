#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RGB(r,g,b)  ((r)|((g)<<8)|((b)<<16))

int main()
{
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);

	printf("#%06X\n", RGB(r, g, b));
	printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));
	
	//printf("#%06X\n", 321);

	//printf("%d %d %d #%06X\n", 'r', 'g', 'b',321);
	return 0;

}