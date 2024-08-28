//#include<iostream>
//#include<string>
//
//int main()
//{
//	//int myArray[10]; // Uninitialized array
//	//int myArray[10] = { 12, 15, 13, 23, 34, 45, 58, 67, 79, 81 }; // Initialized array
//
//	const int arraySize = 12; // const make it so that size can't be changed later on
//	int myArray[arraySize] = { 0 }; // Initialized array
//
//	myArray[4] = 23;
//	myArray[5] = 100;
//	myArray[9] = myArray[4] * myArray[5];
//
//	for (size_t i = 0; i < arraySize; i++)
//	{
//		// Array start at index 0 and up to the size of the array - 1
//		std::cout << i << " " << myArray[i] << "\n";
//	}
//
//	const int arraySizeStrings = 3;
//	std::string myStringArray[arraySizeStrings] = { "None" };
//
//	myStringArray[2] = "Daniel";
//
//	for (size_t i = 0; i < arraySizeStrings; i++)
//	{
//		std::cout << i << " Enter name: ";
//		std::getline(std::cin, myStringArray[i]);
//	}
//
//	for (size_t i = 0; i < arraySizeStrings; i++)
//	{
//		std::cout << i << " " << myStringArray[i] << "\n";
//	}
//
//	system("PAUSE");
//	return 0;
//}