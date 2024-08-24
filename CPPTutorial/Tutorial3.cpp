//#include<iostream>
//#include<string>
//
//int main()
//{
//	std::string sentence = "Hello Guys\nHow are you?";
//	std::cout << sentence << "\n";
//
//	int i = 0;
//	int a = 0;
//	float f = 1.0;
//
//	std::cout << "Enter two numbers: ";
//	std::cin >> i >> a >> f;
//	std::cout << "Your numbers are: " << i << " " << a << " " << f << "\n";
//	std::cin.ignore(); // Ingnore a key after above "cin" for a getline() below to work
//
//	std::cout << "Please enter a cool sentence please:" << "\n";
//	//std::cin >> sentence; // // Only read the first word befor the space key
//	// The getline() stop with the Enter key (can print out nothing if enter is press before the function is called)
//	std::getline(std::cin, sentence);
//
//	std::cout << sentence << "\n";
//
//	system("PAUSE");
//
//	return 0;
//}