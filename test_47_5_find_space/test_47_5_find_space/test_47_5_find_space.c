#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char s1[31];
	char *s2 = malloc(sizeof(char) * 31);
	char *ptr_add[30] = { NULL, };
	scanf("%[^\n]s", s2);
	/*printf("%s\n", s2);*/
	char *ptr = strtok(s2, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
	int i = 0;
	
	while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
	{
		ptr_add[i] = ptr;
		//printf("%s\n", ptr);          // 자른 문자열 출력
		ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
		i++;
	}
	//printf(" \n");
	//printf("%s\n", ptr_add[0]);
	//printf("%s\n", ptr_add[1]);
	//printf("%s\n", ptr_add[2]);

	/*for (int j = 0; j < i-1; j++)
	 strcat(ptr_add[j+1],ptr_add[j]);
	
	printf("%s\n", s1);*/

	sprintf(s1, "%s%s%s", ptr_add[0], ptr_add[1], ptr_add[2]);
	//printf("%s\n", s1);

	int length = strlen(s1);
	//printf("%d\n", length);

	bool ispelindrum = true;
	for (int i = 0; i < length / 2 - 1; i++)
		if (s1[i] != s1[length - 1-i])
			ispelindrum = false;

	printf("%d\n", ispelindrum);
	return 0;
}