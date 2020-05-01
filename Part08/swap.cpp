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

	int a = 1, b = 2;

	cout << "a : " << a << ", b : " << b << endl;
	swap(a, b);
	cout << "a : " << a << ", b : " << b << endl;

	auto iter = v.begin() + 1;

	cout << "v[0] : " << v[0] << ", v[1] : " << v[1] << endl;
	iter_swap(v.begin(), iter);
	cout << "v[0] : " << v[0] << ", v[1] : " << v[1] << endl;
}