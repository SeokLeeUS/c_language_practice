#include <stdio.h>

#define printf
#define fprintf

#define ANDROID
#define MOBILE
#include "platform.h"

int main()
{
	printf("OS: Android\n");

	return 0;
}

/*
소스 코드 맨 위에 #define printf와 
같이 정의되어 있으므로 
printf 함수를 사용할 수 없는 상태입니다.

platform.h을 보면 
TARGET_PLATFORM == PLATFORM_ANDROID일 때 
printf 매크로를 해제한 뒤 다시 printf를 
printf로 정의하고 있고, 아닐 때는 printf를 사용할 
수 없도록 설정되어 있습니다. 그러므로 printf를 사용하려면 
일단 #include로 platform.h를 포함해줍니다.

platform.h에서 TARGET_PLATFORM이 
PLATFORM_ANDROID가 되려면 
#if defined(ANDROID) && defined(MOBILE)을 
만족해야 합니다. 따라서 #include "platform.h" 
위쪽에 #define ANDROID, #define MOBILE과 같이 
ANDROID와 MOBILE을 정의해주면 됩니다.
*/