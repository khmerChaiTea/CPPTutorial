#include "Dice.h"

int Dice::ID = 0;

// Static functions
int Dice::getStaticID()
{
	return Dice::ID;
}

// Do not define the varible here if it is already defined/initialized
Dice::Dice(const int value, const std::string color)
	: value(value)
{
	this->color = color;
	Dice::ID++;
}

Dice::~Dice()
{

}

// Function
const int Dice::toss() const
{
	return rand() % this->value + 1;
}