#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Func(int n)
{
	return n + 5;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v2(5);

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	transform(v.begin(), v.end(), v.begin(), Func);

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// transform�� v2.end()�� ��ȯ�Ѵ�.
	vector<int>::iterator iter_end=
		transform(v.begin(), v.end(), v2.begin(), Func);

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

	cout << "[v2.begin(), iter_end] ������ : " << *v2.begin() << "..." <<
		*(iter_end - 1) << endl;

	return 0;
}