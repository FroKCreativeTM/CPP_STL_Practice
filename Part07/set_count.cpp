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

	cout << "¿ø¼Ò 50ÀÇ °¹¼ö " << s.count(50) << endl;
	cout << "¿ø¼Ò 100ÀÇ °¹¼ö " << s.count(100) << endl;

	return 0;
}