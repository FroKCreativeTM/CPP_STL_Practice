#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v1;

	// ǥ�� �Է� ��Ʈ������ ������ �Է¹޾� v1�� ����.
	copy(istream_iterator<int>(cin), istream_iterator<int>(),
		back_inserter<vector<int>>(v1));

	cout << "v1 : ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// ������ ��Ʈ�� ��(Ctrl + D)���� �Է� �޾� ȭ�鿡 ���
	//	copy(istream_iterator<int>(cin), istream_iterator<int>(),
	//			ostream_iterator<int>(cout, " "));

	return 0;
}