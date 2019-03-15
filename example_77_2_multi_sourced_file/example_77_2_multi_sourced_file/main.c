#include "calc.h"
#include "print.h"

/*
main.c 파일에서는 지금까지 
만든 구조체와 함수를 사용하면 됩니다. 
add, sub 함수를 사용하기 위해 calc.h 헤더 파일을 포함했고, 
print 함수를 사용하기 위해 print.h 헤더 파일을 포함했습니다. 
여기서 CALC_DATA 구조체를 사용하기 위해 
calcdata.h 헤더 파일을 포함해야 하는데 
calc.h, print.h에서 이미 포함하고 있으므로 
calcdata.h 헤더 파일은 따로 포함하지 않았습니다.
최종 헤더 파일 포함 관계는 다음과 같습니다.
*/

int main()
{
	CALC_DATA data1;
	data1.operand1 = 10;
	data1.operand2 = 20;

	add(&data1);
	print(&data1);

	CALC_DATA data2;
	data2.operand1 = 40;
	data2.operand2 = 15;

	sub(&data2);
	print(&data2);
	
	return 0;
}