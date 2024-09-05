#include<iostream>
#include<cstdlib>
#include<string>

class Card
{
private:
	std::string name;
	int value;

public:
	Card(int value, std::string name)
	{
		this->value = value;
		this->name = name;
	}
	
	// Unary operator overloading
	const Card operator-()
	{
		Card temp(-this->value, this-> name + "-");

		return temp;
	}

	// Binary operator overloading
	const Card operator+ (const Card& card)
	{
		Card temp(this->value + card.value, this->name + " + " + card.name);

		return temp;
	}

	const Card operator* (const int multiple)
	{
		this->value *= 2;
		this->name += " * 2";
		Card temp(this->value, this->name);

		return temp;
	}

	inline const int& getValue() const { return this->value; }
	inline const std::string& getName() const { return this->name; }
};

int main()
{
	Card c1(5, "Bad Card");
	Card c2(34, "Good Card");
	//int i = 20;

	//-c1;
	Card c3 = (c1 + c2);
	

	std::cout << c1.getValue() << " " << c1.getName() << "\n";
	std::cout << c2.getValue() << " " << c2.getName() << "\n";
	std::cout << c3.getValue() << " " << c3.getName() << "\n";

	Card c4 = (c3 * 2);
	std::cout << c4.getValue() << " " << c4.getName() << "\n";

	system("pause");
	return 0;
}