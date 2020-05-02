#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Plus(int left, int right)
{
	return left + right;
}

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);
	v2.push_back(400);
	v2.push_back(500);

	vector<int> v3(5);

	auto iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus);

	for (auto i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (auto i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	for (auto i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	return 0;
}