#include <stdio.h>
#include <stdbool.h>

int getMana()
{
	int num1 = 222;
	return num1;
}

float getAttachSpeed()
{
	float num2 = 0.679f;
	return num2;
}

bool isMelee()
{
	bool b1 = true;
	return b1;
}

int main()
{

	int mana;
	float attackSpeed;
	bool melee;

	mana = getMana();
	attackSpeed = getAttachSpeed();
	melee = isMelee();

	printf("%d\n", mana);
	printf("%f\n", attackSpeed);
	printf("%d\n", melee);

	return 0;
}