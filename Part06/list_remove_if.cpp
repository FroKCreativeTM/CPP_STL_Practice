#include <iostream>
#include <list>

using namespace std;

bool Predicate(int n)
{
	return 10 <= n && n <= 30;
}

int main()
{
	list<int> li;

	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_back(40);
	li.push_back(50);
	li.push_back(10);

	list<int>::iterator iter;
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	li.remove_if(Predicate); // 조건에 맞다면 그 노드 전부를 지운다.
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}