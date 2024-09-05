/*
* Tutorial: Deep copy vs. Shallow copy
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;

	//int* intptr = &num1;
	//int* intptrd = new int(30); // Can cause memory leak -- need to be delete after created/used

	//intptrd = intptr; // Create memory leak -- shallow copy
	//intptr = intptrd;

	int* intptr1 = new int(50);
	int* intptr2 = new int(30);

	// Shallow copy
	//intptr1 = intptr2; // Create memory leak!

	// Deep copy (safe!)
	*intptr1 = *intptr2;

	num1 = num2;

	cout << num1 << "\n";

	delete intptr1; // Delete to prevent memory leak --  cleaning up
	delete intptr2;

	system("pause");
	return 0;
}