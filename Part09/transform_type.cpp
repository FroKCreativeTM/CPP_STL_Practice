#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

/*
template <typename T>
class Plus
{
public : 
	typedef T first_argument_type;
	typedef T second_argument_type;
	typedef T result_type;

	T operator() (const T& lhs, const T& rhs) const
	{
		return lhs + rhs;
	}
};
*/

template <typename T>
class Plus : public binary_function<T,T,T>
{
public:
	/*typedef T first_argument_type;
	typedef T second_argument_type;
	typedef T result_type;*/

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

	vector<int> v2(3);

	transform(v.begin(), v.end(), v2.begin(), binder1st<plus<int>>(plus<int>(), 100));

	return 0;
}