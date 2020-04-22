#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool prediction(int a, int b)
{
	return abs(b - a) > 10;
}

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(50);
	vec.push_back(90);

	for (auto i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter;
	// ��� ������ �ɾ�ΰ� ���� �� ������ �����Ѵٸ�
	// �� ������ ���ǿ� �´� ��ü�� ��ȯ�ϰԲ� �����Ǿ��ִ�.
	iter = adjacent_find(vec.begin(), vec.end(), prediction);	

	if (iter != vec.end())
	{
		cout << *iter << endl;
	}

	for (; iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}