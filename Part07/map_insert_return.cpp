#include <iostream>
#include <map>

using namespace std;

int main()
{
	// map �����̳ʴ� hashŸ��ó�� key�� value�� ������
	// ���� Ʈ���̴�. �� �� key�� ������� ���� Ʈ���� ������ �Ǹ�,
	// less �����ڸ� �������� ������ �ȴ�.
	// �Ʒ�ó�� �����ϸ� key type�� int, value Ÿ�Ե� int�� �ȴ�.
	map<int, int> m;

	// insert() ���� Ÿ�� ����� ����� pair�� ��������.
	// first�� � ��ü�� iterator�� �ְ�
	// second���� insert�� ��ȯ ����� ����ȴ�.
	pair <map<int, int>::iterator, bool> pr;

	// insert �κ��� intelli�� ���� �� �� �ֶ߽�, pair�� �̿��ؼ� 
	// ������ �ϴ� ���� �� �� �ִ�.
	// �� �� pair �����̳ʸ� ����� �� map�� Ÿ�԰� �����ؾ��Ѵٴ�
	// ���� Ȯ���ؾߵȴ�.
	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));

	// �Ϻη� second�� false�� ��ȯ�ޱ� ���ؼ�
	// key���� �ִ� ���� �־��.
	pr = m.insert(pair<int, int>(5, 30));
	if (!pr.second)
	{
		cout << pr.first->first << "�� �̹� �ִ� key�Դϴ�." <<
			endl;
	}
	else
	{
		cout << pr.first->first << "�� ���������� ����Ǿ����ϴ�." <<
			endl;
	}

	// ���� key���� ���� pair�� �־��.
	pr = m.insert(pair<int, int>(9, 100));
	if (!pr.second)
	{
		cout << pr.first->first << "�� �̹� �ִ� key�Դϴ�." <<
			endl;
	}
	else
	{
		cout << pr.first->first << "�� ���������� ����Ǿ����ϴ�." <<
			endl;
	}

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	return 0;

}
