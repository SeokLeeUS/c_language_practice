#include <stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨

	for (int i = 0; i < sizeof(binary) / sizeof(int); i++)
		decimal = decimal + binary[i];

	printf("%d\n", decimal);

	return 0;
}