#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	set<int>::iterator iter_lower;
	set<int>::iterator iter_upper;

	iter_lower = s.lower_bound(30);	// 30�� �����ϴ� ������ �ݺ���
	iter_upper = s.upper_bound(30);	// 30�� ������ ������ �ݺ���
	cout << *iter_lower << endl;
	cout << *iter_upper << endl;

	iter_lower = s.lower_bound(55);
	iter_upper = s.upper_bound(55);
	if (iter_lower != iter_upper)
	{
		cout << "55�� s�� ����" << endl;
	}
	else
	{
		cout << "55�� s�� ����" << endl;
	}

	return 0;
}