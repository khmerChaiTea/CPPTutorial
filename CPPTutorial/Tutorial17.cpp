#include<iostream>
#include<string>

// Reference parameters
// Pass by value
// Pass by reference

//double function(int a, float b, std::string name)
//{
//	return a + b;
//}

void changeNameOfCharacter_VAL(std::string name) //  Pass by value
{
	/*
		Funcction will change the "name" variable (By Value).
	*/

	name = "DANIEL";
}

void changeNameOfCharacter_REF(std::string &name_to_change, std::string name) //  Pass by reference
{
	/*
		Funcction will change the "name" variable (By reference).
	*/

	name_to_change = name;
}

void changeNameOfCharacter_P(std::string *name) //  Pass by reference (pointer)
{
	/*
		Funcction will change the "name" variable (By reference - pointer).
	*/

	*name = "Daniel";
}

void incrementEXP(int& exp, int level)
{
	exp += 20 + level * 2 - 3;
}

int main()
{
	int level = 1;
	int exp = 0;

	std::cout << exp << "\n";

	incrementEXP(exp, level);
	std::cout << exp << "\n";

	std::string characterName = "John";
	std::string myName = "Erika";

	changeNameOfCharacter_VAL(characterName);
	std::cout << characterName << "\n";

	changeNameOfCharacter_REF(characterName, "Erik");
	std::cout << characterName << "\n";
	changeNameOfCharacter_REF(myName, "Peter");
	std::cout << myName << "\n";
	changeNameOfCharacter_REF(myName, characterName);
	std::cout << myName << "\n";

	changeNameOfCharacter_P(&characterName);
	std::cout << characterName << "\n";

	system("PAUSE");
	return 0;
}