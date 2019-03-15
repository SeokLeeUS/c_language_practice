#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char menu;
	scanf("%c", &menu);
	switch (menu)
	{
	case 'p':
		printf("포카리스웨트\n");
		break;
	case 'c':
		printf("콜라\n");
		break;
	case 'f':
		printf("환타\n");
		break;
	 default:
		printf("판매하지 않는 메뉴\n");
		break;


	}
}