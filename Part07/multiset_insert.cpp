#include <iostream>
#include <set>

using namespace std;

int main()
{
	// �⺻������ ��Ƽ���� �°� ���ϸ� ������ ������ ������ ������
	// ���� ū �������� ���� �ߺ��Ǵ� ���Ұ� �� �� �ִٴ� ���̴�.
	// �� �� �ߺ��Ǵ� ���Ҵ� �� ������ right node�� ����ȴ�.
	multiset<int> ms;
	multiset<int>::iterator iter;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);	
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	iter = ms.insert(10);

	cout << "iter�� ���� : " << *iter << endl;

	for (iter = ms.begin(); iter != ms.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;


	return 0;
}