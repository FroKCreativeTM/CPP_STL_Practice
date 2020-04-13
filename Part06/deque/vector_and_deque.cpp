#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
	// 둘 다 100으로 초기화한 4개의 원소를 가진 컨테이너이다.
	vector<int> vec(4, 100);
	deque<int> dq(4, 100);

	vec.push_back(200);
	dq.push_back(200);

	for (vector<int>::size_type i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq.size(); i++)
	{
		cout << dq[i] << " ";
	}
	cout << endl;

	return 0;
}