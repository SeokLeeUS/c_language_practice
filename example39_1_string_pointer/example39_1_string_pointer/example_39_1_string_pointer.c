#include <stdio.h>
int main()
{
	char c1 = 's';
	char *s1 = "Hello";

	printf("%c\n", c1);
	printf("%s\n", s1);

	printf("%c\n", s1[1]);
	printf("%c\n", s1[5]);
	

	/*s1[1] = 'A';
	printf("%s\n", s1[1]);*/

	char s2[10] = "Hello";
	printf("%s\n", s2);

	/*char s3[10];
	s3 = "Hello";
	prtinf("%s\n", s3);
	*/
	char s4[6] = "hello"; /*do not forget padding*/
	printf("%s\n", s4);


	char s5[6] = "hello";
	s5[0] = 'A';
	printf("%s\n", s5);

	char s6[] = "Beethoven 9th Symphony";
	printf("%s\n", s6);

	char *s7 = "Beethoven 8th Symphony";
	printf("%s\n", s7);

	printf("%c\n", s6[10]);

	char s8[] = "Beethoven\n9th\nSymphony";
	printf("%s\n", s8);

	return 0;
}