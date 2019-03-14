#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp = fopen("words.txt", "r");

	//determine file size at first 

	
	int size;
	int count;
	char *buffer;
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	//then initialize buffer size
	
	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);
	fseek(fp, 7, SEEK_SET);
	count = fread(buffer, sizeof(char), 4, fp);
	printf("%s", buffer);
	memset(buffer, 0, size+1);    
	fseek(fp, -6, SEEK_END);
	fread(buffer, sizeof(char), 2, fp);
	printf("%s", buffer);

	fclose(fp);
	free(buffer);
	return 0;
}