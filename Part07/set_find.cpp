#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;

	iter = s.find(30);	// 30의 반복자를 반환
	// 연관 컨테이너의 핵심 멤버 메소드이다.
	// 즉 연관 컨테이너는 key를 찾을 때 ==를 사용하지 않는다.
	// 정렬 기준에 의해 원소가 정렬되어 있으므로, 컨테이너의 정렬 기준 조건자를 이용해서
	// 찾기 연산을 실시한다.
	if (iter != s.end())
	{
		cout << *iter << "가 있다." << endl;
	}
	else
	{
		cout << "30이 없다." << endl;
	}

	return 0;
}