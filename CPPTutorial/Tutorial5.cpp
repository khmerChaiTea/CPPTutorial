#include<iostream>
#include<string>

int main()
{
	int colorChoice = 0;

	std::cout << "Pick a color (1: R, 2: G, 3: B): ";
	std::cin >> colorChoice;
	int a = 21;

	switch (colorChoice)
	{
	case 1:
		// Can't create variable in here directly; need a scope "{ }"
		//int a = 25;
		std::cout << "Color Red picked! " << a << "\n";
		break;

	case 2:
		std::cout << "Color Green picked!" << "\n";
		break;

	case 3:
		std::cout << "Color Blue picked!" << "\n";
		break;

	default:
		std::cout << "Not a valid choice!" << "\n";
		break;
	}

	system("PAUSE");
	return 0;
}