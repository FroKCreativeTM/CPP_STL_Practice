#include <iostream>
#include <queue>

using namespace std;

int main()
{
	// 1번째 템플릿 인자 : 컨테이너의 자료형 타입
	// 2번째 템플릿 인자 : 컨테이너 종류(vector? deque? list?
	// 3번째 템플릿 인자 : 컨테이너의 순서
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