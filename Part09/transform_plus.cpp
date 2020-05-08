#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
class Plus
{
public : 
	T operator() (const T& lhs, const T& rhs)
	{
		return lhs + rhs;
	}
};

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int> v2;
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);

	vector<int> v3(3);

	transform(v.begin(), v.end(), v2.begin(), v3.begin(), plus<int>());

	for (auto i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	return 0;
}