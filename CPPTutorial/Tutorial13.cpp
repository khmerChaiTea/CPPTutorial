#include<iostream>
#include<string>

int main()
{
	const int arrSize = 5;
	int myArr[arrSize]; // [23][155][65][54][48][486] // 1D array

	//[xx][xx][xx][xx][xx]
	//[xx][xx][xx][xx][xx]
	//[xx][xx][xx][xx][xx]
	//[xx][xx][xx][xx][xx]
	//[xx][xx][xx][xx][xx]

	int my2DArr[arrSize][arrSize]; // 2D array

	for (size_t i = 0; i < arrSize; i++)
	{
		for (size_t k = 0; k < arrSize; k++) // Nested for-loop
		{
			my2DArr[i][k] = 0;
		}
	}

	my2DArr[0][0] = 10;
	my2DArr[4][4] = 10;
	my2DArr[0][4] = 10;
	my2DArr[4][0] = 10;

	for (size_t i = 0; i < arrSize; i++)
	{
		for (size_t k = 0; k < arrSize; k++) // Nested for-loop
		{
			std::cout << my2DArr[i][k] << " ";
		}
		std::cout << "\n";
	}

	system("PAUSE");
	return 0;
}