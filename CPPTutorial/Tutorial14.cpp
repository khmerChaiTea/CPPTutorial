//#include<iostream>
//#include<string>
//#include<vector>
//
//int main()
//{
//	std::vector<int> myIntVec;
//
//	myIntVec.push_back(23);
//	myIntVec.push_back(4);
//	myIntVec.push_back(453);
//	myIntVec.push_back(844);
//
//	std::vector<std::string> myStrVec;
//
//	myStrVec.push_back("Prem");
//	myStrVec.push_back("John");
//	myStrVec.push_back("Luke");
//
//	myStrVec.erase(myStrVec.begin() + 1); // Begin is the start of the iterator of a loop
//	 // Erase the end; but since the end since is exclusive use "myStrVec.end() - 1"
//	//myStrVec.erase(myStrVec.end() - 1);
//
//	//myStrVec.clear(); // Cleared the vector / array
//
//	// Removed a certain elementat an unknown position if it existed
//	//bool erased = false;
//	//for (size_t i = 0; i < myIntVec.size() && erased == false; i++)
//	//{
//	//	myIntVec.erase(myIntVec.begin() + i);
//	//	erased = true;
//	//}
//
//	int integerToRemove = 453;
//	bool found = false;
//
//	for (size_t i = 0; i < myIntVec.size() && found == false; i++)
//	{
//		if (myIntVec[i] == integerToRemove)
//		{
//			myIntVec.erase(myIntVec.begin() + i);
//			found = true;
//			std::cout << integerToRemove << " has been erased!" << "\n";
//		}
//	}
//
//	if (found == false)
//		std::cout << integerToRemove << " was not found in myIntArr!" << "\n";
//
//	std::cout << "\n";
//
//	for (size_t i = 0; i < myIntVec.size(); i++)
//	{
//		std::cout << myIntVec[i] << " ";
//	}
//
//	std::cout << "\n";
//
//	for (size_t i = 0; i < myStrVec.size(); i++)
//	{
//		std::cout << myStrVec[i] << " ";
//	}
//
//	std::cout << "\n";
//
//	std::cout << "Size of myIntVec: " << myIntVec.size() << "\n";
//	std::cout << "Size of myStrVec: " << myStrVec.size() << "\n";
//
//	system("Pause");
//	return 0;
//}