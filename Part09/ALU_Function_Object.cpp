#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <algorithm>

using namespace std;

template <typename T>
class Plus : public binary_function<T, T, T>
{
public : 
	T operator()(const T& lhs, const T& rhs)
	{
		return lhs + rhs;
	}
};

int main()
{
	plus<int> oPlus;

	cout << oPlus(10, 20) << endl;
	cout << oPlus.operator()(10, 20) << endl;

	cout << plus<int>()(10, 20) << endl;
	cout << plus<int>().operator()(10, 20) << endl;

	Plus<int> oMyPlus;

	cout << oMyPlus(10, 20) << endl;
	cout << oMyPlus.operator()(10, 20) << endl;

	cout << Plus<int>()(10, 20) << endl;
	cout << Plus<int>().operator()(10, 20) << endl;

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v2;

	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	vector<int> v3(5);

	transform(v.begin(), v.end(), v2.begin(), v3.begin(), plus<int>());
	cout << endl << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	transform(v.begin(), v.end(), v2.begin(), v3.begin(), multiplies<int>());
	cout << endl << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	// v vector�� ������
	transform(v.begin(), v.end(), v3.begin(), negate<int>());
	cout << endl << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	// v ���� ���ҿ��� ��
	adjacent_difference(v.begin(), v.end(), v3.begin(), minus<int>());
	cout << endl << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	// v vector�� ������ �� ����
	partial_sum(v.begin(), v.end(), v3.begin(), multiplies<int>());
	cout << endl << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	// ��� ������ ��
	cout << "v ��� ������ �� : " << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;

	return 0;
}