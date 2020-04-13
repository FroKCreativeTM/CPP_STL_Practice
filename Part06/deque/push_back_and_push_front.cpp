#include <iostream>
#include <deque>
using namespace std;

int main()
{
	/*
	���� ����� 5�����̴�.
	deque<int> dq;
	deque<int> dq(n);	// n���� ������ �̸� ����
	deque<int> dq(n,x);	// n���� ������ x���� �ְ� ����
	deque<int> dq(dq2); // �ٸ� deque�� ����
	deque<int> dq(b,e); // �ݺ��� ���� [b,e)
	*/
	deque<int> dq;

	dq.push_back(50);
	dq.push_back(60);
	dq.push_back(70);
	dq.push_back(80);
	dq.push_back(90);

	deque<int>::iterator iter;

	cout << "After push_back : ";
	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	dq.push_front(40);
	dq.push_front(30);
	dq.push_front(20);
	dq.push_front(10);

	cout << "After push_front : ";
	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}