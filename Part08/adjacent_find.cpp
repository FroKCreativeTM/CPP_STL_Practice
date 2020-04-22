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
	// 구간 [vec.begin(), vec.end()) 에서 현재 원소와 다음 원소가 같아지는 첫 원소 반복자를 반환
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