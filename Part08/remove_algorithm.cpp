#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool pred(int n)
{
	return n <= 30;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// � �����͸� ����� �� ���� ��带 ������ ��� ����.
	// �� �ݺ��ڴ� �� �������� ����Ų��.
	// �׸��� remove�� �� �ڿ� �� ���� ��带 �����Ѵ�.

	// �̷��� ����� ���� ���Ŷ�� �Ѵ�.
	vector<int>::iterator iter_end = remove(v.begin(), v.end(), 30);		
	cout << *iter_end << endl;

	//for (auto i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;
	
	// ���� vector�� ��������� �ٲٷ��� erase�� ����ؾ��Ѵ�.
	// �� ������ ��带 ����� ���� ����� �ٲ���.
	v.erase(iter_end, v.end());

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// �翬�ϰԵ� remove�� �ٸ� ���� �˰���ó�� if �Լ��� �ݹ����� �� �� �ִ�.
	// �� �̷� ��� size�� ������ �ʱ� ������ �ڿ� ������ �����͵��� �ߺ� �ȴ�.
	iter_end = remove_if(v.begin(), v.end(), pred);

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// �̷� �ߺ� �����͸� unique�� ���ؼ� ������ �� �ִ�.
	// �� ���� �ߺ� �������� �����̱� ������ ���� ������ �Ǿ����� �ʴٸ�
	// �������� ���� �� �ִ�.
	// �� ��Ȯ���� removeó�� ���� �����̱� ������ �ᱹ ��ü ������� ��ȭ���� �ʴ´�.
	sort(v.begin(), v.end());
	iter_end = unique(v.begin(), v.end());

	for (auto iter = v.begin(); iter != iter_end; ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}