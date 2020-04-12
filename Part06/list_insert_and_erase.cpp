#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> li;

	li.push_back(50);
	li.push_back(60);
	li.push_back(70);
	li.push_back(80);
	li.push_back(90);

	list<int>::iterator iter = li.begin();
	list<int>::iterator iter2;

	++iter;
	++iter;

	// iter가 가리키는 곳을 지운다.
	iter2 = li.erase(iter);

	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "iter2 : " << *iter2 << endl;

	iter = iter2;

	iter2 = li.insert(iter, 300);

	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	cout << "iter2 : " << *iter2 << endl;
	return 0;
}