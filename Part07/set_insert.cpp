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

	// set�� �ݺ��ڰ� �ִ�.
	// �� ���� ������ �⺻�� less�̴�.
	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	s.insert(50);		// �ߺ��� ���Ҵ� ���� ���еȴ�.
	s.insert(50);

	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}