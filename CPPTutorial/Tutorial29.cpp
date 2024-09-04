#include<iostream>
#include<ctime>
#include "Dice.h"

int main()
{
	srand(static_cast<unsigned>(time(0)));

	Dice d6;
	Dice d12(12, "Red");

	std::cout << d6.toss() << " Color: " << d6.getColor() << "\n";
	std::cout << d12.toss() << " Color: " << d12.getColor() << "\n";

	system("PAUSE");
	return 0;
}