#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	vector<int>::iterator iter = vec.begin() + 2;
	vector<int>::iterator iter2;

	// iter�� ����Ű�� ��ġ�� ���� 100�� ��������
	// iter2�� ������ ������ ����Ű�� �ݺ���

	iter2 = vec.insert(iter, 100);

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "iter : " << *iter2 << endl;

	return 0;
}