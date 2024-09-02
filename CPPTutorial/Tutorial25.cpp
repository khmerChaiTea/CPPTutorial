#include<iostream>
#include<string>
#include<vector>

/*
* Syntax:
Keyword(class) class name
{
private:
private members
private functions

public:
constructor
destructor
public members
public member-functions
}
*/

class Person
{
private:
	// Variables
	std::string name;
	int age;
	bool female;
	std::string address;
	std::string profession;
	bool std;

	// Functions

public:
	// Constructors and destructors
	Person()
	{
		std::cout << "I am the default constructor!" << "\n";

		this->name = "none";
		this->age = 1;
		this->female = false;
		this->address = "none";
		this->profession = "none";
		this->std = false;
	}

	Person(std::string name, int age, bool female, std::string address, std::string profession,	bool std)
	{
		std::cout << "I am the specialized constructor!" << "\n";

		this->name = name;
		this->age = age;
		this->female = female;
		this->address = address;
		this->profession = profession;
		this->std = std;
	}

	~Person()
	{
		std::cout << "Hello and goodbye from the destructor!" << "\n";
	}

	// Accessors

	// Modifier

	// Functions
};

int main()
{
	Person p1("Prem", 27, false, "123 NW 5ST Somewhere, CA 90213", "Student", false);
	Person p2;

	system("PAUSE");

	std::cout << "Hello from end of program!" << "\n";
	return 0;
}