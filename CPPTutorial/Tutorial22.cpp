#include<iostream>

// Global scope
int globalInt1 = 10;

void func(int glonalInt1)
{
	glonalInt1 = 20;
	const int lel = 20;
}

int main()
{
	// Main scope
	// When you create variable with the same name it use and change the local one

	int mainInt1 = 100;

	globalInt1 = 20;

	if (globalInt1 == 20)
	{
		globalInt1 = 30;
		mainInt1 = 200;

		if (mainInt1 == 200)
		{
			const int ifInt1 = 300;
		}
	}

	system("PAUSE");
	return 0;
}

