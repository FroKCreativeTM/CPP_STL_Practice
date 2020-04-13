#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	dq.push_front(50);
	dq.push_front(40);
	dq.push_front(30);
	dq.push_front(20);
	dq.push_front(10);

	deque<int>::iterator iter;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout << *iter << " " ;
	}
	cout << endl;

	iter = dq.begin() + 2;
	cout << *iter << endl;

	iter += 2;
	cout << *iter << endl;

	iter -= 3;
	cout << *iter << endl;

	return 0;
}