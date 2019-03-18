#include <stdio.h>
enum DayofWeek {
	Sunday =0,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

typedef enum _DayOfWeek {
	Sundays = 0,
	Mondays,
	Tuesdays
} DayofWeek_typedef;

int main()
{
	enum DayofWeek week;
	week = Tuesday;
	printf("%d\n", week);
	DayofWeek_typedef week1;
	week1 = Mondays;
	printf("%d\n", week1);
	return 0;
}

/*
먼저 enum 키워드 뒤에 열거형 
이름을 지정해주고 { } (중괄호) 
안에 값을 나열합니다. 
여기서 각 값들은 , (콤마)로 구분하며 
= (할당 연산자)를 사용하여 값을 할당할 수 있습니다. 
마지막으로 열거형을 정의할 때 } 
(닫는 중괄호) 뒤에는 반드시 ; (세미콜론)을 붙여줍니다.

같은 이름으로 define된 enumeration은 중복되면 안됨. 


*/

