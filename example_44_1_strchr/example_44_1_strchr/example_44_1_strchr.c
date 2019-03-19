#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";
	char *ptr = strchr(s1, 'a');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a');
	}


	char *ptr_r = strrchr(s1, 'a');
	printf("%s\n", ptr_r);
	
	char s2[100] = "A Garden Diary A Garden Diary A Garden Diary";

	char *ptr_str = strstr(s2, "Dia");
	printf("%s\n", ptr_str);

	while (ptr_str != NULL)
	{
		printf("%s\n", ptr_str);
		ptr_str = strstr(ptr_str + 1, "Dia");
	}

	return 0;
}