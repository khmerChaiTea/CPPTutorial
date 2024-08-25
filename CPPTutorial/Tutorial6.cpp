#include<iostream>

int main()
{
		int choice = 1;

	//// While loop
	//while(choice <=0)
	//{
	//	std::cout << "Quit program? (0: No / 1: Yes)" << "\n";
	//	std::cin >> choice;
	//}

	// Do-while loop
	do
	{
		std::cout << "Quit program? (0: No / 1: Yes)" << "\n";
		std::cin >> choice;
	}
	while (choice <= 0);

	system("PAUSE");
	return 0;
}