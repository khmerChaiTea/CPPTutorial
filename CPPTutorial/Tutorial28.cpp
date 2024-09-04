//#include<iostream>
//#include<ctime>
//
//class Dice
//{
//private:
//	const int value;
//
//public:
//	Dice(int value);
//	virtual ~Dice();
//
//	// Accessors
//	const int& getValue() const;
//
//	// Functions
//	const int toss() const;
//};
//
//int main()
//{
//	srand(static_cast<unsigned>(time(0))); // srand(time(static_cast<unsigned>(0))); throw error
//
//	Dice d6(6);
//	Dice d12(12);
//
//	for (size_t i = 0; i < 6; i++)
//	{
//		std::cout << d6.toss() << "\n";
//	}
//
//	std::cout << "\n";
//
//	for (size_t i = 0; i < 12; i++)
//	{
//		std::cout << d12.toss() << "\n";
//	}
//
//	system("PAUSE");
//	return 0;
//}
//
//// Class dice
//Dice::Dice(int value)
//	: value(value) // Initializer list for class constant member variables and references
//{
//	
//}
//
//Dice::~Dice()
//{
//
//}
//
//const int& Dice::getValue() const
//{
//	return this->value;
//}
//
//const int Dice::toss() const
//{
//	return rand()%this->value + 1;
//}
