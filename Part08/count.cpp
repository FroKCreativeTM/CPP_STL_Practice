#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(50);
	vec.push_back(30);
	vec.push_back(90);

	for (auto i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	// ���� [vec.begin(), vec.end())���� 30������ ������ ��ȯ
	int n = count(vec.begin(), vec.end(), 30);
	cout << "30�� ���� : " << n << endl;

	return 0;
}