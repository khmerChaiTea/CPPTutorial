#include<iostream>

using namespace std;

int main()
{
	// Variables
	// Type - Name - Value
	int i = 34 + 5; // Initializing a variable (short, long, unsigned 'int') - cut of decimal (turncates)
	//i = 20;
	//i = 34 + 5;
	double d = 30.54566; // Double precision variable (4 decimal point - rounded up)
	float f = 20.5494946; // Floating point variable (4 decimal point - rounded up)
	//char c = 'a'; // Character (ASCII Table) - 'a' = 97
	char c = 97; // Output an 'a'
	//bool b = true; // Boolean variable - can either be true or false (1 or 0)
	bool b = i == 39; // true - 1 or false - 0
	string s = "Hello I am a string variable!"; // This is with the std:: package; string variable (used as a standard type)

	cout << i << "\n";
	cout << d << "\n";
	cout << f << "\n";
	cout << c << "\n";
	cout << b << "\n";
	cout << s << "\n";
	cout << s.length() << "\n";

	system("PAUSE");

	return 0;
}