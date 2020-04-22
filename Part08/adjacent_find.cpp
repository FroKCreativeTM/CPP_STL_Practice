#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(40);
	vec.push_back(50);

	for (auto i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter;
	// ���� [vec.begin(), vec.end()) ���� ���� ���ҿ� ���� ���Ұ� �������� ù ���� �ݺ��ڸ� ��ȯ
	iter = adjacent_find(vec.begin(), vec.end());

	if (iter != vec.end())
	{
		cout << *iter << endl;
	}

	for (; iter < vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}