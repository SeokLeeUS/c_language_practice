#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int count;
	char buffer[5] = { 0, };
	FILE *src = fopen("hello.txt", "r");
	FILE *dest = fopen("hello2.txt", "w");

	while (feof(src) == 0)
	{
		count = fread(buffer, sizeof(char), 4, src);
		fwrite(buffer, sizeof(char), count, dest);
		printf("%s", buffer);

		memset(buffer, 0, 5);

	}

	fclose(dest);
	fclose(src);

	return 0;
}