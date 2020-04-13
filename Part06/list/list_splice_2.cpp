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

	list<int>::iterator iter1;
	list<int>::iterator iter2;

	cout << "list1 : ";
	for (iter1 = list1.begin(); iter1 != list1.end(); ++iter1)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	cout << "list2 : ";
	for (iter2 = list2.begin(); iter2 != list2.end(); ++iter2)
	{
		cout << *iter2 << " ";
	}
	cout << endl;
	cout << " ================================== " << endl;

	iter1 = list1.begin();
	++iter1;
	++iter1; // 30 원소의 위치를 가리킴

	iter2 = list2.begin();
	++iter2; // 200 원소의 위치를 가리킴

	// iter1이 가리키는 위치에 iter2가 가리키는 위치의 list2의 원소를 잘라붙임
	list1.splice(iter1, list2, iter2);

	cout << "list1 : ";
	for (iter1 = list1.begin(); iter1 != list1.end(); ++iter1)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	cout << "list2 : ";
	for (iter2 = list2.begin(); iter2 != list2.end(); ++iter2)
	{
		cout << *iter2 << " ";
	}
	cout << endl;
	cout << " ================================== " << endl;

	// list1.end()가 가리키는 위치에 순차열 [list2.begin(), list2.end)를 잘라붙임
	list1.splice(list1.end(), list2, list2.begin(), list2.end());

	cout << "list1 : ";
	for (iter1 = list1.begin(); iter1 != list1.end(); ++iter1)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	cout << "list2 : ";
	for (iter2 = list2.begin(); iter2 != list2.end(); ++iter2)
	{
		cout << *iter2 << " ";
	}
	cout << endl;

	return 0;
}