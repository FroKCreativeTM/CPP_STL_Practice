#include <iostream>
#include <vector>

int main()
{
	std::vector<int> intVec;
	int arr[5] = { 1,2,3,4,5 };

	intVec.push_back(1);
	intVec.push_back(2);
	intVec.push_back(3);
	intVec.push_back(4);
	intVec.push_back(5);

	std::vector<int>::iterator iter = intVec.begin();
	int* p = arr;
	std::cout << *iter << ", " << *p << std::endl;	//iter는 p처럼 동작

	std::vector<int>::const_iterator citer = intVec.cbegin();
	const int* cp = arr;
	std::cout << *citer << ", " << *cp << std::endl;	// citer는 cp처럼 동작

	const std::vector<int>::iterator iter_const = intVec.begin();
	int* const p_const = arr;
	std::cout << *iter_const << ", " << *p_const << std::endl;	// iter_const는 p_const처럼 동작

	const std::vector<int>::const_iterator citer_const = intVec.cbegin();
	const int* const cp_const = arr;
	std::cout << *citer_const << ", " << *cp_const << std::endl;	// citer_const는 cp_const처럼 동작
	   	  
	return 0;
}