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

	// ¹İº¹ÀÚ ½ÖÀÇ pair °´Ã¼
	pair<set<int>::iterator, set<int>::iterator> iter_pair;

	iter_pair = s.equal_range(30);
	cout << *iter_pair.first << endl;		// 30À» °¡¸®Å´
	cout << *iter_pair.second << endl;		// 40À» °¡¸®Å´

	iter_pair = s.equal_range(55);
	if (iter_pair.first != iter_pair.second)
	{
		cout << "55°¡ s¿¡ ÀÖÀ½" << endl;
	}
	else
	{
		cout << "55°¡ s¿¡ ¾øÀ½" << endl;
	}

	return 0;
}