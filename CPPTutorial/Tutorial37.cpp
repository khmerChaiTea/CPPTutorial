//#include<iostream>
//#include<cstdlib>
//#include<string>
//
//class Car
//{
//private:
//	std::string name;
//	int* horsePower;
//
//public:
//	Car(std::string name, int horsePower);
//	Car(const Car& obj); // Copy constructor
//	~Car();
//
//	// Operators
//	// Assigment operator
//	void operator= (const Car& obj);
//
//	const std::string& getName() const;
//	const int& getHorsePower() const;
//};
//
//
//
//int main()
//{
//	Car car1("Audi A4", 2000);
//	//Car car2(car1);  // Same as Car car2 = car1;
//	Car car2 = car1; // Copy constructor just as Car car2(car1);
//	Car car3("Toyota CH-R", 5000);
//
//	car2 = car1; // Assignment operator
//	car1 = car3;
//
//	std::cout << car1.getName() << " " << car1.getHorsePower() << "\n";
//	std::cout << car2.getName() << " " << car2.getHorsePower() << "\n";
//	std::cout << car3.getName() << " " << car3.getHorsePower() << "\n";
//
//	system("pause");
//	return 0;
//}
//
//Car::Car(std::string name, int horsePower)
//{
//	this->name = name;
//	this->horsePower = new int(horsePower);
//}
//
//Car::Car(const Car& obj)
//{
//	if (this != &obj) // It's not the same object
//	{
//		this->name = obj.name;
//		//this->horsePower = *obj.horsePower; // WRONG!! Shall copy
//		this->horsePower = new int(*obj.horsePower);
//
//		std::cout << "Copy constructor used!" << "\n";
//	}
//}
//
//Car::~Car()
//{
//	delete this->horsePower;
//}
//
//void Car::operator=(const Car& obj)
//{
//	if (this != &obj) // It's not the same object
//	{
//		// Clean old data
//		delete this->horsePower;
//
//		// Copy over new data
//		this->name = obj.name;
//		//this->horsePower = *obj.horsePower; // WRONG!! Shall copy
//		this->horsePower = new int(*obj.horsePower); //  Deep copy
//
//		std::cout << "Overloaded assignment operator used!" << "\n";
//	}
//}
//
//const std::string& Car::getName() const
//{
//	return this->name;
//}
//
//const int& Car::getHorsePower() const
//{
//	return *this->horsePower;
//}
