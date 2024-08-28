#include<iostream>
#include<string>

int main()
{
	int i = 20;
	int k = 30;
	double d = 20.3;

	// Type, reference operator, initial value!
	int& r = i;
	//r = k;
	double& dr = d;

	r = k;
	r = 10;
	std::cout << i << "\n";
	std::cout << k << "\n";
	std::cout << r << "\n";
	std::cout << dr << "\n";
	std::cout << INT_MAX << "\n";

	system("PAUSE");
	return 0;
}