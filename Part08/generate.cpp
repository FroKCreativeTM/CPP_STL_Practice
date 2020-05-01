#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Integer
{
private : 
	int data;

public : 
	explicit Integer(int _d = 0) : data(_d) {}
	int operator()()
	{
		return data++;
	}
};

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// [v.begin(), v.end())�� ���Ҹ� 1~5�� ä��
	generate(v.begin(), v.end(), Integer(1));
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// [v.begin(), v.end())�� ���Ҹ� 100~104�� ä��
	generate(v.begin(), v.end(), Integer(100));
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// [v.begin(), v.begin() + 3)�� ���Ҹ� 100~104�� ä��
	generate_n(v.begin(), 3, Integer(1));
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}