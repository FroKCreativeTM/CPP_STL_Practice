#include <iostream>
#include <set>

using namespace std;

int main()
{
	// �⺻������ ��Ƽ���� �°� ���ϸ� ������ ������ ������ ������
	// ���� ū �������� ���� �ߺ��Ǵ� ���Ұ� �� �� �ִٴ� ���̴�.
	// �� �� �ߺ��Ǵ� ���Ҵ� �� ������ right node�� ����ȴ�.
	multiset<int> ms;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	ms.insert(10);

	multiset<int>::iterator iter;
	for (iter = ms.begin(); iter != ms.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = ms.find(30);
	cout << "30 ������ �� : " << ms.count(30) << endl;
	cout << "iter : " << *iter << endl;

	multiset<int>::iterator lower_iter;
	multiset<int>::iterator upper_iter;

	lower_iter = ms.lower_bound(30);		// ���� �ݺ���
	upper_iter = ms.upper_bound(30);		// �� �ݺ���

	cout << "lower bound : " << *lower_iter << ", upper bound : " << *upper_iter << endl;

	// 30 30�� ������ ������ �޸𸮻� 30 30 50 �̷� ������ ����Ǿ��ֱ� �����̴�.
	cout << "���� [lower_iter, upper_iter)�� ������ : ";
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;


	return 0;
}