#include <iostream>

using namespace std;

// �Լ� ��ü ������
class CLessFunctor
{
public : 
	bool operator()(int lhs, int rhs) const
	{
		return lhs < rhs;
	}
};

// �Լ� ������
bool LessFunc(int left, int right)
{
	return left < right;
}

int main()
{
	// �Լ� ������ ������
	bool(*LessPtr)(int, int) = LessFunc;
	CLessFunctor cLessFunctor;

	// ��� bool ������ ��ȯ
	// 1. �Լ� ��ü�� 10�� 20�� ��
	cout << cLessFunctor(10, 20) << endl;

	// 2. �Լ��� ���� 10�� 20�� ��
	cout << LessFunc(10, 20) << endl;

	// 3. �Լ� �����ͷ� 10�� 20�� ��
	cout << LessPtr(10, 20) << endl;

	// ���� true �� 1�� ��ȯ�Ѵ�.

	return 0;
}