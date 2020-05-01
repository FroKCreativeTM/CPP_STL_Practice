#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pred(int n)
{
	return n <= 20;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(30);
	v.push_back(50);

	cout << "v : ";
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// ���Ұ� 30�̸� 0���� �� �ٲٱ�.
	replace(v.begin(), v.end(), 30, 0);
	cout << "v : ";
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	v.clear();
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(30);
	v.push_back(50);

	cout << "v : ";
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// ���ǿ� ������ 0���� �� �ٲٱ�.
	replace_if(v.begin(), v.end(), pred, 0);
	cout << "v : ";
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}