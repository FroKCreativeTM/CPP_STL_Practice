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
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

	vector<int> v2(6);
	vector<int> v3(6);

	cout << "v1 : ";
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "v2 : ";
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	cout << "v3 : ";
	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter_end;
	// 30인 원소를 모두 0으로 변환
	iter_end = replace_copy(v1.begin(), v1.end(),
		v2.begin(), 30, 0);
	// 20 이하인 모든 원소를 0으로 변환
	iter_end = replace_copy_if(v1.begin(), v1.end(),
		v3.begin(), pred, 0);

	cout << "v1 : ";
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "v2 : ";
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	cout << "v3 : ";
	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	return 0;
}