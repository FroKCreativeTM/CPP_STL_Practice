// list�� ��ũ�� ����Ʈ ��� �� ��� ������� �����ϴ� �����̳��̴�.
// ���� ��ũ�� ����Ʈ ������� �۵��Ѵ�.
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

	list<int>::iterator iter;

	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	li.push_front(40);
	li.push_front(30);
	li.push_front(20);
	li.push_front(10);

	for (iter = li.begin(); iter != li.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}