#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int left, int right)
{
	return left > right;
}

int main()
{
	vector<int> vec1;
	vector<int> vec2;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	vec2.push_back(40);
	vec2.push_back(80);
	vec2.push_back(20);

	vector<int>::iterator iter;
	// find는 기본적으로 그 마지막의 제일 첫 부분을 iter로 return하는데
	// 이런 경우엔 제일 vec1에서 첫 부분의 첫 요소를 iter로 return 한다.
	iter = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
	}

	iter = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), pred);
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
	}

	return 0;
}