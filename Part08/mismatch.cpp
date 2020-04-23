#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pred(int left, int right)
{
	return abs(right - left) <= 5;
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

	vec2.push_back(10);
	vec2.push_back(20);
	vec2.push_back(30);
	vec2.push_back(50);
	vec2.push_back(60);

	// mismatch는 서로 다른 원소가 발견되는 첫 원소의 반복자를 쌍으로 반환한다.
	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
	iter_pair = mismatch(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());

	cout << *iter_pair.first << " " << *iter_pair.second << endl;

	vec1.clear();
	vec2.clear();

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	vec2.push_back(11);
	vec2.push_back(25);
	vec2.push_back(33);
	vec2.push_back(46);
	vec2.push_back(50);

	iter_pair = mismatch(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), pred);

	cout << *iter_pair.first << " " << *iter_pair.second << endl;

	return 0;
}