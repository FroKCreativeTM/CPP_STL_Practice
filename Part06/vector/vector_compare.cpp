#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	std::vector<int> vec2;
	vec2.push_back(10);
	vec2.push_back(20);
	vec2.push_back(50);

	// 모든 원소가 같다면 참
	if (vec == vec2)
		std::cout << "vec == vec2" << std::endl;

	// 모든 원소가 같자면 거짓
	if (vec != vec2)
		std::cout << "vec != vec2" << std::endl;

	// 순차열의 원소를 하나씩 순서대로 비교하여 v2의 원소가 크다면 참
	// 즉 index 2부분에서 vec2가 더 크기에 참이다.
	if (vec < vec2)
		std::cout << "vec < vec2" << std::endl;

	return 0;
}