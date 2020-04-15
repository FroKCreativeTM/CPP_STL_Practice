#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;

	// �⺻������ set�� insert�� pair�� return�Ѵ�.
	pair<set<int>::iterator, bool> pr;

	pr = s.insert(50);
	s.insert(40);
	s.insert(80);

	if (pr.second == true)		// ���� ������
	{
		cout << *pr.first << " ���� ����" << endl;
	}
	else
	{
		cout << *pr.first << "�� �̹� �ֽ��ϴ�. ���� ����" << endl;
	}

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	pr = s.insert(50);			// �ι�° �����̱� ������ �����Ѵ�.

	if (pr.second == true)		// ���� ������
	{
		cout << *pr.first << " ���� ����" << endl;
	}
	else
	{
		cout << *pr.first << "�� �̹� �ֽ��ϴ�. ���� ����" << endl;
	}

	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}