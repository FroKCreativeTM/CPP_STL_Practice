#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;
	pair<set<int>::iterator, bool> pr;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	pr = s.insert(90);

	for (auto iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	s.insert(pr.first, 85);

	for (auto iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}