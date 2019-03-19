#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s1 = "C language";
	char s2[20];
	strcpy(s2, s1);
	printf("%s\n", s2);
	


	char *s3 = "The Little Prince";
	char *s4 = malloc(sizeof(char) * 30);

	strcpy(s4, s3);
	printf("%s\n", s4);
	free(s4);


	char s5[20] = " 9th Symphony";
	char s6[40] = "Beethoven";
	strcat(s6, s5);
	printf("%s\n", s6);


	char *s7 = " Wonderland";
	char *s8 = malloc(sizeof(char) * 30);

	strcpy(s8, "Alice in");
	strcat(s8, s7);

	printf("%s\n", s8);
	free(s8);


	return 0;
}