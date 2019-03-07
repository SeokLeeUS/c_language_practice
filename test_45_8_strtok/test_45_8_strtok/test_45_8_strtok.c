#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	char *s1 = malloc(sizeof(char) * 1001);
	
	scanf("%[^\n]s", s1);
	char *strptr = strtok(s1, " .,");
	int i = 0;
	
	while (strptr != NULL)
	{
		/*printf("%s\n", strptr);*/
		if (strcmp(strptr, "the") == 0)
			i++;
		strptr = strtok(NULL, " .,");
	}

	printf("%d\n", i);
	

	return 0;
}
