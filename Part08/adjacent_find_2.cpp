#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	for (auto i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter;
	vector<int>::iterator iter_b = vec.begin();
	vector<int>::iterator iter_e = vec.begin() + 2;
	// ���� [iter_b, iter_e) ���� ���� ���ҿ� ���� ���Ұ� �������� ù ���� �ݺ��ڸ� ��ȯ
	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e)	// ã�� ���Ұ� ������ Ȯ�� <<�´� ǥ��>>
	{
		cout << *iter << endl;
	}

	cout << "================" << endl;
	if (iter != vec.end())	// ã�� ���Ұ� ������ Ȯ�� <<Ʋ�� ǥ��>>
	{
		cout << *iter << endl;
	}

	iter_b = vec.begin();
	iter_e = vec.end();
	iter = adjacent_find(iter_b, iter_e);

	// �� �� end�� ����Ű�� ������ ������� ����.
	if (iter != iter_e)
	{
		cout << *iter << endl;
	}
	if (iter != vec.end())
	{
		cout << *iter << endl;
	}

	return 0;
}