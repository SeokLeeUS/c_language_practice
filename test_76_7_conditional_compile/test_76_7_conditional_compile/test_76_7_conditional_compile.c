#include <stdio.h>

#define TARGET_PLATFORM PLATFORM_LINUX
/*
printf로"OS: Linux"를 출력하고 있습니다. 
하지만 위쪽을 보면 TARGET_PLATFORM == PLATFORM_LINUX일 때만 
printf가 printf로 정의되어 있고, 
아닐 때는 printf를 사용할 수 없도록 설정되어 있습니다.
TARGET_PLATFORM이 PLATFORM_LINUX가 되려면 
더 위쪽의 #if defined(LINUX)를 만족해야 합니다. 
따라서 #define LINUX와 같이 LINUX를 정의해주면 됩니다.
*/

#define PLATFORM_UNKNOWN 0
#define PLATFORM_IOS     1
#define PLATFORM_ANDROID 2
#define PLATFORM_WIN32   3
#define PLATFORM_LINUX   4
#define PLATFORM_MAC     5

#if defined(IOS)
#define TARGET_PLATFORM PLATFORM_IOS
#endif

#if defined(ANDROID)
#define TARGET_PLATFORM PLATFORM_ANDROID
#endif

#if defined(WIN32) && defined(_WINDOWS)
#define TARGET_PLATFORM PLATFORM_WIN32
#endif

#if defined(LINUX)
#define TARGET_PLATFORM PLATFORM_LINUX
#endif

#if defined(MAC)
#define TARGET_PLATFORM PLATFORM_MAC
#endif

#if TARGET_PLATFORM == PLATFORM_LINUX
#define printf printf
#define fprint fprintf
#else
#define printf
#define fprintf
#endif

int main()
{
	printf("OS: Linux\n");

	return 0;
}