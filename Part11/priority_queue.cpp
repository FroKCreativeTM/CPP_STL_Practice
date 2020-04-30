#include <iostream>
#include <queue>

using namespace std;

int main()
{
	// 1��° ���ø� ���� : �����̳��� �ڷ��� Ÿ��
	// 2��° ���ø� ���� : �����̳� ����(vector? deque? list?
	// 3��° ���ø� ���� : �����̳��� ����
	priority_queue<int, deque<int>, greater<int>> pq;

	pq.push(10);
	pq.push(20);
	pq.push(30);

	while (!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}

	return 0;
}