#include<iostream>
#include"myMathFunctions.h"

// Function overloading
// Function header = function signature
// Function  overriding (overshadowing)

//int add(int a, int b)
//{
//	std::cout << "Hi from int add function!" << "\n";
//	return a + b;
//}
//
//float add(float a, float b)
//{
//	std::cout << "Hi from float add function" << "\n";
//	return a + b;
//}
//
//int add(float a, int b)
//{
//	std::cout << "Hi from float int add function" << "\n";
//	return a + b;
//}
//
//float add(float a, float b, float c)
//{
//	std::cout << "Hi from float add function 2" << "\n";
//	return a + b + c;
//}

int main()
{
	std::cout << add(1, 1, 2, 39) << "\n";

	system("PAUSE");
	return 0;
}