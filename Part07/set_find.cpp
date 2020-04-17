#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	iter = s.find(30);	// 30�� �ݺ��ڸ� ��ȯ
	// ���� �����̳��� �ٽ� ��� �޼ҵ��̴�.
	// �� ���� �����̳ʴ� key�� ã�� �� ==�� ������� �ʴ´�.
	// ���� ���ؿ� ���� ���Ұ� ���ĵǾ� �����Ƿ�, �����̳��� ���� ���� �����ڸ� �̿��ؼ�
	// ã�� ������ �ǽ��Ѵ�.
	if (iter != s.end())
	{
		cout << *iter << "�� �ִ�." << endl;
	}
	else
	{
		cout << "30�� ����." << endl;
	}

	return 0;
}