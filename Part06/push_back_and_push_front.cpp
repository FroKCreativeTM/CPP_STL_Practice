#include <iostream>
#include <deque>
using namespace std;

int main()
{
	/*
	생성 방법은 5가지이다.
	deque<int> dq;
	deque<int> dq(n);	// n개의 공간을 미리 생성
	deque<int> dq(n,x);	// n개의 공간에 x값을 넣고 생성
	deque<int> dq(dq2); // 다른 deque를 복사
	deque<int> dq(b,e); // 반복자 구간 [b,e)
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