#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v2;
	v2.push_back(11);
	v2.push_back(22);
	v2.push_back(33);
	v2.push_back(44);
	v2.push_back(55);

	swap_ranges(v.begin(), v.end(), v2.begin());

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (auto i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	return 0;
}