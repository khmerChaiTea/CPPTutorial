#include<iostream>

int main()
{
	// Arithmetic Operators

	int x = 0;
	int y = 23;

	float f1 = 6.f; // Need a point
	float f2 = 4.f;

	x = y + 2;
	std::cout << "y + 2 = " << x << "\n";
	x = 2 + 3;
	std::cout << "2 + 3 = " << x << "\n";
	x = 5 - 4;
	std::cout << "5 - 4 = " << x << "\n";
	x = 4 * 3;
	std::cout << "4 * 3 = " << x << "\n";
	x = (float)6 / 4; // 6 / 4 is integer division (so is assigned to x); use (float)6/4 so result in decimal
	std::cout << "6 / 4 = " << (float)6 / 4 << "\n";
	x = 6 % 4; // Output remainder
	std::cout << "6 % 4 = " << x << "\n";

	std::cout << "Paper division f1 / f2 = " << f1 / f2 << "\n";

	system("PAUSE");
	return 0;
}