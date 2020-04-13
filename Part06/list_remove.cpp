#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> li;

	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_back(40);
	li.push_back(50);
	li.push_back(10);
	li.push_back(10);

	list<int>::iterator iter;

	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	li.remove(10);	// 10 ���Ҹ� ���� ��带 ��� ����
	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}