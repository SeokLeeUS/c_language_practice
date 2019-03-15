#include <stdio.h>
int main()
{
	int writtenTest = 78;
	int toeic = 870;

	if ((writtenTest >= 80) && (toeic >= 850))
		printf("pass\n");
	else
		printf("fail\n");

	return 0;
}