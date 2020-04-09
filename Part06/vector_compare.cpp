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

	// ��� ���Ұ� ���ٸ� ��
	if (vec == vec2)
		std::cout << "vec == vec2" << std::endl;

	// ��� ���Ұ� ���ڸ� ����
	if (vec != vec2)
		std::cout << "vec != vec2" << std::endl;

	// �������� ���Ҹ� �ϳ��� ������� ���Ͽ� v2�� ���Ұ� ũ�ٸ� ��
	// �� index 2�κп��� vec2�� �� ũ�⿡ ���̴�.
	if (vec < vec2)
		std::cout << "vec < vec2" << std::endl;

	return 0;
}