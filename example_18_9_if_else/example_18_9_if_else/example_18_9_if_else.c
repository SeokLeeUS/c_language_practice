#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int num1, num2, num3, num4;
	float avg;
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

	if ((num1<0) || (num1>100) || (num2<0) || (num2>100) || (num3<0) || (num3>100) ||(num4<0)||(num4>100))
	{
	printf("잘못된 점수\n");
	}

	else
	{
		avg = (num1 + num2 + num3 + num4) / 4;
		if (avg>85)
		{
			printf("합격\n");
		}
		else
		{
			printf("불합격\n");
		}
	}

	return 0;
}