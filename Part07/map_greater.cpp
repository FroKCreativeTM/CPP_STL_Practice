#include <iostream>
#include <map>

using namespace std;

int main()
{
	// map �����̳ʴ� hashŸ��ó�� key�� value�� ������
	// ���� Ʈ���̴�. �� �� key�� ������� ���� Ʈ���� ������ �Ǹ�,
	// less �����ڸ� �������� ������ �ȴ�.
	// �Ʒ�ó�� �����ϸ� key type�� int, value Ÿ�Ե� int�� �ȴ�.
	// �� ���� key���� ������ greater������ �ٲ��.
	map<int, string, greater<int>> m;

	// [] �����ڸ� �̿��ؼ� � Ư�� index�� �ִ� 
	// value���� �����ϰų� �߰� �� �� �ִ�.
	// �� insert�� ��ü �����ϴٴ� ���̴�.
	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";

	map<int, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	cout << m[8] << " ";
	cout << m[7] << " ";
	cout << m[5] << " ";
	cout << m[4] << " ";
	cout << m[3] << " ";
	cout << m[1] << " ";

	return 0;
}