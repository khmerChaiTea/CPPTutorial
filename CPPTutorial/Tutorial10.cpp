//#include<iostream>
//#include<fstream>
//#include<string>
//
//// Output to file
//// If file does not exist with a certain name, it will be created
//// Text or binary (binary is faster)
//// File-type does not really matter, it will be text anyway
//// Flags (later)
//// Becareful with opening files and saving them
//// Becareful with while loops!!!
//
//int main()
//{
//	std::string name = "Daniel";
//	int age = 25;
//	std::string address = "Somestreet 165 48946 Somecountry";
//	double height = 1.75;
//	std::string catName = "Bob";
//
//	std::string fileName = "personDatabase.txt"; // File extensions can be omitted
//
//	//std::string data = "This is data\nHello this is from a new line 2.";
//	//int i = 23;
//
//	/*std::string fileName = "myFile.txt";*/
//
//	//std::ofstream outFile(fileName.c_str()); // Open file in the constructor
//	std::ofstream outFile;
//
//	//outFile.open(fileName.c_str()); // can ignore on previous version by #include<string>
//	outFile.open(fileName);
//
//	if (outFile.is_open())
//	{
//		/*std::cout << "I am open!" << "\n";*/
//		//outFile << data << " " << i;
//		outFile << "Name: " << name
//			<< "\n"
//			<< "Age: " << age
//			<< "\n"
//			<< "Address: " << address
//			<< "\n"
//			<< "Height: " << height
//			<< "\n"
//			<< "Cat Name: " << catName
//			<< "\n";
//	}
//
//	outFile.close(); // After the file is open close it to prevent issues (ALWAYS!)
//
//	system("PAUSE");
//	return 0;
//}