#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char *s1 = malloc(sizeof(char) * 30);
	strcpy(s1, "2015-06-10T15:32:19"); /* malloc assigns a pointer s1 to memory location, then utilize strcpy function to copy string to s1 */
	char *ptr = strtok(s1, "T-:");

	while (ptr != NULL)
	{
		printf("%s\n", ptr); /*printf pointer directly. that's something weird, no back referencing for array required. hope it's somewhat consistent */
		ptr = strtok(NULL, "T-:");
	}

	char s2[30] = "2015-06-10T15:32:19";
	char *ptr1 = strtok(s2, "-T:");
	while (ptr1 != NULL)
	{
		printf("%s\n", ptr1);
		ptr1 = strtok(NULL, "-T:");

	}
	return 0;
}