#include<iostream>
#include <iomanip>

template <typename T>
void getChoice(T& choice)
{
	//int choice = 0;

	std::cout << "- Enter choice: ";
	std::cin >> std::setw(1) >> choice;

	// Error check -- while not good
	while (!std::cin.good())
	{
		// Report problem
		std::cout << "ERROR: Faulty input! Try again..." << "\n";

		// Clear stream
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		// Get input again...
		std::cout << "- Enter choice: ";
		std::cin >> std::setw(1) >> choice;
	}

	// Clear stream
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

	//return choice;
}

int main()
{
	int choice = -1;
	//char choiceChar = 'n';

	//std::cout << "- Enter choice: ";
	//std::cin >> choice;
	getChoice(choice);

	while (choice > 0) // Menu
	{
		switch (choice)
		{
		case 1:
			std::cout << "Option ONE" << "\n";
			break;

		case 2:
			std::cout << "Option TWO" << "\n";
			break;

		case 3:
			std::cout << "Option THREE" << "\n";
			break;


		default:
			std::cout << "No such Option!" << "\n";
			break;
		}

		//std::cout << "- Enter choice: ";
		//std::cin >> choice;
		getChoice(choice);
	}

	std::cout << "Quitting..." << "\n";

	system("PAUSE");
	return 0;
}