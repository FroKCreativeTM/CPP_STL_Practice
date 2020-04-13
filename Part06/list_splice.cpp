#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> list1;
	list<int> list2;

	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(40);
	list1.push_back(50);

	list2.push_back(100);
	list2.push_back(200);
	list2.push_back(300);
	list2.push_back(400);
	list2.push_back(500);

	list<int>::iterator iter;
	cout << "list1 : ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "list2 : ";
	for (iter = list2.begin(); iter != list2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = list1.begin();
	++iter;
	++iter;	// 30 원소의 위치를 가리킴

	// iter가 가리킨 오른쪽으로 list2 잘라넣기
	list1.splice(iter, list2);

	cout << "list1 : ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "list2 : ";
	for (iter = list2.begin(); iter != list2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}