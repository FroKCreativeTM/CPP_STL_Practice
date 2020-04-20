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

	// ã��� ������ �����̳�, set, multiset���� �ߵ��
	// find�� �̿��ϰų� �ƴϸ�, upper_bound, lower_bound�� �̿��ؼ�
	// ã�� ���̴�.
	// multi������ ���� key���� ���� �� ���� �� ������ bound�� 
	// �������� �̰Ŵ� single ���� �����̳ʴ�.

	// ���⼭ find���� key���� �־ ã���ִ� ����̴�.
	iter = m.find(5);

	cout << "find�� �̿��� ���" << endl;
	if (iter != m.end())
	{
		cout << iter->first << "�� �Ҵ�� value�� : "
			<< iter->second << endl;
	}


	map<int, string>::iterator lower_iter;
	map<int, string>::iterator upper_iter;
	lower_iter = m.lower_bound(5);
	upper_iter = m.upper_bound(5);

	cout << "bound�� �̿��� ���" << endl;
	cout << "������ [lower_iter, upper_iter)" << endl;
	for (iter = lower_iter; iter != upper_iter; iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	pair<map<int, string>::iterator,
		map<int, string>::iterator> iter_pr;
	iter_pr = m.equal_range(5);

	cout << "iterator pair�� �̿��� ���" << endl;
	cout << "������ [iter_pr.first, iter_pr.second)" << endl;
	for (iter = iter_pr.first; iter != iter_pr.second; iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;
	return 0;
}