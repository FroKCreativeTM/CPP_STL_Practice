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

	list2.push_back(15);
	list2.push_back(25);
	list2.push_back(35);
	list2.push_back(45);
	list2.push_back(55);

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

	// splice와 비교
	// 공통점 : 잘라 붙여넣기
	// 차이점 : merge는 정렬을 해서 붙여넣음
	list1.merge(list2);

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

	return 0;
}