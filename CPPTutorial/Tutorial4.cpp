#include<iostream>
#include<string>

int main()
{
	int i = 0;
	std::string sentence = "";
	bool value = true; // 1 = true or 0 = false

	std::cout << "Input a number friend: ";
	std::cin >> i;
	std::cin.ignore();

	std::cout << "Input a sentence: ";
	std::getline(std::cin, sentence);

	// Relational operators
	/* 
	== (Equal)
	> (Greater than) 
	< (Less than)
	>= (Greater than or Equal) 
	<= (Less than or Equal)
	!(Is not True)
	!= (Is not Equal)
	*/

	if (value != false) // set bool value = 0 and in parameter use if(!value)
	{
		std::cout << "Value is TRUE!" << "\n";
	}
	else
	{
		std::cout << "Value is FALSE!" << "\n";
	}

	if (i == 23)
	{
		std::cout << "The integer is 23" << "\n";
	}
	else if (i < 23)
	{
		std::cout << "The integer is less than 23" << "\n";
	}
	else if (i == 25)
	{
		std::cout << "WOW The integer is huge!" << "\n";
	}
	else
	{
		std::cout << "The integer was none of the above values!" << "\n";
	}

	std::cout << "The integers value: " << i << "\n";

	if (sentence == "hello")
	{
		std::cout << "The sentence is: " << sentence << "\n";
	}

	system("PAUSE");

	return 0;
}