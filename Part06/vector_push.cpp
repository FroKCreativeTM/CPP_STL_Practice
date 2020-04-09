#include <iostream>
#include <vector>

int main()
{
	std::vector<int> intVec;

	// 뒤에다가 붙이는 방식
	intVec.push_back(10);
	intVec.push_back(20);
	intVec.push_back(30);
	intVec.push_back(40);
	intVec.push_back(50);

	std::vector<int>::iterator iter = intVec.begin();
	std::vector<int>::const_iterator citer = intVec.cbegin();	// 내용물이 상수라 수정 불가

	std::cout << *iter << std::endl;
	std::cout << *citer << std::endl;

	std::cout << *++iter << std::endl;
	std::cout << *++citer << std::endl;

	*iter = 100;

	std::cout << *iter << std::endl;

	return 0;
}