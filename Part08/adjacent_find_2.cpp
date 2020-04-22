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
	vec.push_back(40);
	vec.push_back(50);

	for (auto i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter;
	vector<int>::iterator iter_b = vec.begin();
	vector<int>::iterator iter_e = vec.begin() + 2;
	// 구간 [iter_b, iter_e) 에서 현재 원소와 다음 원소가 같아지는 첫 원소 반복자를 반환
	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e)	// 찾은 원소가 없는지 확인 <<맞는 표현>>
	{
		cout << *iter << endl;
	}

	cout << "================" << endl;
	if (iter != vec.end())	// 찾은 원소가 없는지 확인 <<틀린 표현>>
	{
		cout << *iter << endl;
	}

	iter_b = vec.begin();
	iter_e = vec.end();
	iter = adjacent_find(iter_b, iter_e);

	// 둘 다 end를 가리키기 때문에 출력하지 않음.
	if (iter != iter_e)
	{
		cout << *iter << endl;
	}
	if (iter != vec.end())
	{
		cout << *iter << endl;
	}

	return 0;
}