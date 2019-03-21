# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	/*char c1;
	printf("input character:");
	scanf("%c", &c1);
	printf("%c\n", c1);
	return 0;*/
	printf("input character:");
	char c2 = getchar();
	printf("%c\n", c2);
	/*return 0;*/

	char c3 = 'a\n';
	putchar(c3);
	printf("\\\n");
	return 0;
}
