//#include<iostream>
//
//// Does a vaule need to be changed? If not; make it const, else just make it a reference.
//void funct1(int& valueTochange, const int& value)
//{
//	/* Get a variable as a reference and replace its value
//	with another value */
//
//	valueTochange = value;
//}
//
//const float& median(const int& a, const int b, const int c)
//{
//	return (a + b + c) / 3.f;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//
//	funct1(a, b);
//
//	std::cout << a << "\n";
//	std::cout << median(10, 20, 30) << "\n";
//
//	system("PAUSE");
//	return 0;
//}