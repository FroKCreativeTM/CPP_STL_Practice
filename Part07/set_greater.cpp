#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int, greater<int>> s; // 정렬 기준이 greater<int> 조건자를 사용

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	//  greater<int> 조건자를 사용하는 iterator
	// 큰 수에서 작은수로 간다.
	set<int, greater<int>>::iterator iter;
	for ( iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;;

	return 0;
}