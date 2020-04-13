#include <iostream>
#include <list>

using namespace std;

bool Predicate(int first, int second)
{
	return second - first <= 0;
}

int main()
{
	list<int> li;

	li.push_back(10);
	li.push_back(10);
	li.push_back(20);
	li.push_back(20);
	li.push_back(30);
	li.push_back(30);
	li.push_back(40);
	li.push_back(40);
	li.push_back(40);
	li.push_back(50);
	li.push_back(10);

	list<int>::iterator iter;
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// 인접한 같은 원소를 유일하게 만듬.
	li.unique(Predicate);
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;

	return 0;
}