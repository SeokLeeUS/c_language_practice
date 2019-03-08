/*
먼저 struct 키워드 뒤에 구조체 이름을 지정해주고 
{ } (중괄호) 안에 변수를 선언합니다. 
이렇게 구조체 안에 들어있는 변수를 멤버라고 합니다. 
그리고 구조체를 정의할 때 } 
(닫는 중괄호) 뒤에는 반드시 ; (세미콜론)을 붙여줍니다.

구조체는 보통 main 함수 바깥에 정의합니다.
만약 함수 안에 구조체를 정의하면 해당 함수 안에서만 구조체를 사용할 수 있습니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];

};

int main()
{
	/*
	정의한 구조체를 사용하려면 구조체 변수를 선언해야 합니다. 
	이때는 구조체 이름 앞에 반드시 struct 키워드를 붙여줍니다. 
	다음은 Person 구조체 타입의 변수 p1을 선언한다는 뜻입니다.
	*/
	struct Person p1;
	strcpy(p1.name, "lee");
	p1.age = 30;
	strcpy(p1.address, "upland view");
	/*
	p1.age = 30;과 같이 구조체 멤버에 접근한 뒤 값을 할당하고, 
	p1.age과 같이 값을 가져옵니다. 
	p1.name 등의 문자열 멤버는 = (할당 연산자)로 저장할 수 없으므로 
	strcpy 함수를 사용하면 됩니다.
	*/

	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	printf("address: %s\n", p1.address);

	struct Person p2 = {.name="seok",.age =40,.address="michigan"};

	printf("name: %s\n", p2.name);
	printf("age: %d\n", p2.age);
	printf("address: %s\n", p2.address);

	struct Person p3 = { "saejin",38, "michigan" };

	printf("name: %s\n", p3.name);
	printf("age: %d\n", p3.age);
	printf("address: %s\n", p3.address);

	return 0;
}

/*
지금까지 구조체 정의와 선언을 따로 했습니다. 
닫는 중괄호와 세미콜론 사이에 변수를 지정해주면,
구조체를 정의하는 동시에 변수를 선언할 수 있습니다.

struct 구조체이름 {
자료형 멤버이름;
} 변수;
*/


/*
p1은 전역 변수
자세히 보면 구조체 변수 p1 main 함수 바깥에 선언되어 있습니다. 
이렇게 어떤 함수에도 속해있지 않은 변수를 전역 변수라고 합니다. 
전역 변수는 'Unit 78 전역 변수 사용하기'에서 자세히 설명하겠습니다.
*/

/*
구조체 변수를 선언하는 동시에 값을 초기화하려면 중괄호 안에 . 
(점)과 멤버 이름을 적고 값을 할당합니다.
struct 구조체이름 변수이름 = { .멤버이름1 = 값1, .멤버이름2 = 값2 };
멤버 이름과 할당 연산자 없이 값만 콤마로 구분하여 나열해도 됩니다. 단, 이 때는 구조체 멤버가 선언된 순서대로 넣고, 각 멤버의 자료형에 맞게 넣습니다. 
즉, 처음부터 순서대로 값을 채워 넣어야 하며 중간에 있는 멤버만 값을 할당하거나, 중간에 있는 멤버만 생략할 수는 없습니다.
struct 구조체이름 변수이름 = { 값1, 값2 };
*/
