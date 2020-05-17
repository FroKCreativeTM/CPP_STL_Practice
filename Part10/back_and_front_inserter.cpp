#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);

	list<int> lt2;
	lt2.push_back(1);
	lt2.push_back(2);
	lt2.push_back(3);

	// push back으로 원소를 넣는 back_insert_iterator를 가져온다.
	copy(v1.begin(), v1.end(), back_inserter<list<int>>(lt1));
	// push front으로 원소를 넣는 front_insert_iterator를 가져온다.
	copy(v1.begin(), v1.end(), front_inserter<list<int>>(lt2));

	for (auto i : v1)
	{
		cout << i << " ";
	}
	cout << endl;

	for (auto i : lt1)
	{
		cout << i << " ";
	}
	cout << endl;

	for (auto i : lt2)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}