#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int left, int right)
{
	return left > right;
}

int main()
{
	vector<int> vec1;
	vector<int> vec2;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	vec2.push_back(40);
	vec2.push_back(80);
	vec2.push_back(20);

	vector<int>::iterator iter;
	// find�� �⺻������ �� �������� ���� ù �κ��� iter�� return�ϴµ�
	// �̷� ��쿣 ���� vec1���� ù �κ��� ù ��Ҹ� iter�� return �Ѵ�.
	iter = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
	}

	iter = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), pred);
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
	}

	return 0;
}