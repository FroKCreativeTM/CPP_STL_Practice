#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool pred(int n)
{
	return 25 < n;
}

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(50);
	vec.push_back(30);
	vec.push_back(90);

	for (auto i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	// ���� [vec.begin(), vec.end())���� ���ǿ� �´� ���� ī��Ʈ�Ѵ�.
	int n = count_if(vec.begin(), vec.end(), pred);
	cout << "25 �̻��� ���� : " << n << endl;

	return 0;
}