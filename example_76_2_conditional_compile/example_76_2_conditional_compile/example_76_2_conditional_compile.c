#include <stdio.h>
#define DEBUG_LEVEL 2
//#define DEBUG
#define TEST
#define USB
#define NDEBUG
#define KO
#include "message.h"
int main()
{
#if DEBUG_LEVEL>=2
	printf("Debug level 2\n");
#endif

#if (defined DEBUG||defined TEST) && !defined(VERSION_10)
	printf("Debug\n");
#endif

#ifdef PS2
	printf("PS2\n");
#elif defined USB
	printf("USB\n");
#else
	printf("no support\n");
#endif

#ifndef DEBUG
		printf("main function\n");
#endif

printf("%s\n", HELLO_MESSAGE);
			
	return 0;
}


