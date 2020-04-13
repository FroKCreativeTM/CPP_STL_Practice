#include <iostream>
#include <list>

using namespace std;

struct Greater
{
	bool operator() (int left, int right) const
	{
		return left > right;
	}
};

int main()
{
	list<int> li;

	li.push_back(30);
	li.push_back(20);
	li.push_back(50);
	li.push_back(10);
	li.push_back(40);

	list<int>::iterator iter;
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	li.sort(greater<int>());	// 조건자 greater를 사용하여 내림차순으로 정렬
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	li.sort(less<int>());	// 조건자 less를 사용하여 오름차순으로 정렬
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	li.sort(Greater());	// 사용자 조건 정의를 사용하여 내림차순으로 정렬
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}