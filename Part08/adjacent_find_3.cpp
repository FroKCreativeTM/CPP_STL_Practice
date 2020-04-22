#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool prediction(int a, int b)
{
	return abs(b - a) > 10;
}

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(50);
	vec.push_back(90);

	for (auto i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter;
	// 어떠한 조건을 걸어두고 만약 그 조건을 충족한다면
	// 그 충족된 조건에 맞는 개체를 반환하게끔 설정되어있다.
	iter = adjacent_find(vec.begin(), vec.end(), prediction);	

	if (iter != vec.end())
	{
		cout << *iter << endl;
	}

	for (; iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}