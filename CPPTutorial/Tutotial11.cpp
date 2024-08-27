#include<iostream>
#include<fstream>
#include<string>

// A database must have the same structor
int main()
{
	//const char* fileName = "myFile.txt"; // read from a specific file extensions
	const char* fileName = "personDatabase.txt";

	std::ifstream inFile(fileName);
	//inFile.open(fileName);

	//std::string line = "";
	//char c = ' ';
	//int nOfAs = 0;

	std::string name = "";
	int age = 0;
	std::string bloodType = "";
	std::string address = "";
	double height = 0.0; // Height us meter (make sure it is the right type)
	std::string petName = "";

	if (inFile.is_open())
	{
		/*std::cout << "File is open!" << "\n";*/
		//// Getline work up until new line character
		//while (std::getline(inFile, line))
		//{
		//	std::cout << line << "\n";
		//}

		//while (inFile.get(c))
		//{
		//	std::cout << c;
		// 	if (c == 'a' || c == 'A')
		//		nOfAs++;
		//}
		//std::cout << nOfAs << "\n";

		while (!inFile.eof()) // Eof - end of file
		{
			std::getline(inFile, name);

			inFile >> age;
			inFile.ignore(); // Without this the file is going to keep going

			std::getline(inFile, bloodType);

			std::getline(inFile, address);

			inFile >> height;
			inFile.ignore();

			std::getline(inFile, petName);

			std::cout << "Name: " << name << "\n";
			std::cout << "Age: " << age << "\n";
			std::cout << "Blood Type: " << bloodType << "\n";
			std::cout << "Address: " << address << "\n";
			std::cout << "Height: " << height << "\n";
			std::cout << "Pet Name: " << petName << "\n\n";
		}
	}
	else
	{
		std::cout << "Could not open file: " << fileName << "\n";
	}

	inFile.close(); // Do not forget to close file

	system("PAUSE");
	return 0;
}