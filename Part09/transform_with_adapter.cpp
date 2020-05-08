#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

template <typename T>
class Plus
{
public:
	T operator() (const T& lhs, const T& rhs) const
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

	vector<int> v3(3);

	transform(v.begin(), v.end(), v3.begin(), binder1st<plus<int>>(plus<int>(), 100));

	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	return 0;
}