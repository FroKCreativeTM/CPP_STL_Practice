#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int, less<int>> s;

	// 30�� 50 ��
	cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl;	// �ٸ���.
	// 30�� 30 ��
	cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl;	// ����.

	return 0;
}