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

	// [] �����ڸ� �̿��ؼ� � Ư�� index�� �ִ� 
	// value���� �����ϰų� �߰� �� �� �ִ�.
	// �� insert�� ��ü �����ϴٴ� ���̴�.
	m[5] = 100;
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	// key���� 5�� value���� 200���� �����Ѵ�.
	m[5] = 200;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	return 0;
}