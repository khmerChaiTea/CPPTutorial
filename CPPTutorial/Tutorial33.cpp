//#include<iostream>
//#include<ctime>
//#include<vector>
//
//int main()
//{
//	// Initialize
//	std::vector<int> intArr(1000000, 1);
//	int sum = 0;
//
//	// Optimization of loops
//	int start_t = clock();
//
//	// Normal loop (avg: 0.002 ms)
//	//for (size_t i = 0; i < intArr.size(); i++)
//	//{
//	//	sum += intArr[i];
//	//}
//
//	// C++ 11 foreach loop (0.001? keep saying 0 for me)
//	//for (auto &i : intArr)
//	//	sum += i;
//
//	// Iterator range loop (0.02)
//	//const std::vector<int>::const_iterator end = cend(intArr); // Iterator caching
//	//for (std::vector<int>::const_iterator it = cbegin(intArr); it != end; it++)
//	const auto end = cend(intArr); // Iterator caching
//	for (auto it = cbegin(intArr); it != end; it++)
//	{
//		sum += *it;
//	}
//
//	int end_t = clock();
//
//	std::cout << "Time: " << (end_t - start_t) / double(CLOCKS_PER_SEC) << "\n";
//	std::cout << "Sum: " << sum << "\n";
//
//	system("pause");
//	return 0;
//}