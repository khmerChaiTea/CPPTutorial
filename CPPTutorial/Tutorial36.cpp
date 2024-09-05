//#include<iostream>
//#include<string>
//#include<ctime>
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
//
//	//car2 = car1; // Assignment operator
//
//	std::cout << car1.getName() << " " << car1.getHorsePower() << "\n";
//	std::cout << car2.getName() << " " << car2.getHorsePower() << "\n";
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
//	this->name = obj.name;
//	this->horsePower = new int(*obj.horsePower);
//}
//
//Car::~Car()
//{
//	delete this->horsePower;
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
