#include <iostream>
#include <functional>

using namespace std;

int main()
{
	// ���δ��� ���� �Լ��ڸ� ���� �Լ��ڷ� ��ȯ�ϴ� ���̴�.
	// STL�� �ΰ����� ���δ��� �����Ѵ�.

	// less�� ù ���ڸ� 10���� ������ ���� ������ binder�� �����Ѵ�.
	binder1st<less<int>> binder1st = bind1st(less<int>(), 10);

	// binder�� ù ��° ���ڸ� 10���� ������ less
	cout << binder1st(5) << endl;
	// binder�� ù ��° ���ڸ� 10���� ������ less
	cout << binder1st(10) << endl;
	// binder�� ù ��° ���ڸ� 10���� ������ less
	cout << binder1st(20) << endl;

	// �� ���ڴ� ����ó���� �� �� �ִ�.
	cout << bind1st(less<int>(), 10)(5) << endl;
	// �� ���ڴ� ����ó���� �� �� �ִ�.
	cout << bind1st(less<int>(), 10)(10) << endl;
	// �� ���ڴ� ����ó���� �� �� �ִ�.
	cout << bind1st(less<int>(), 10)(20) << endl;

	// less�� �ι�° ���ڸ� 10���� ������ ���� 
	binder2nd<less<int>> binder2nd = bind2nd(less<int>(), 10);

	// binder�� �ι�° ���ڸ� 10���� ������ less
	cout << binder2nd(5) << endl;
	// binder�� �ι�° ���ڸ� 10���� ������ less
	cout << binder2nd(10) << endl;
	// binder�� �ι�° ���ڸ� 10���� ������ less
	cout << binder2nd(20) << endl;

	// �� ���ڴ� ����ó���� �� �� �ִ�.
	cout << bind2nd(less<int>(), 10)(5) << endl;
	// �� ���ڴ� ����ó���� �� �� �ִ�.
	cout << bind2nd(less<int>(), 10)(10) << endl;
	// �� ���ڴ� ����ó���� �� �� �ִ�.
	cout << bind2nd(less<int>(), 10)(20) << endl;

	return 0;
}