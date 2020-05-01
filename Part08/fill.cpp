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

	fill(v.begin(), v.end(), 0);
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}

	// ���� v.begin���� +3���� ��� ���Ҹ� 55��
	fill_n(v.begin(), 3, 55);
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}