#include <iostream>
#include <map>

using namespace std;

int main()
{
	// multimap은 간단하다.
	// multiset처럼 key 중복이 가능하다. (이러면 과연 의미가 있나)
	// 그리고 그 중복되는 노드는 right 노드로 저장된다.
	multimap<int, int> mm;

	mm.insert(pair<int, int>(5, 100));
	mm.insert(pair<int, int>(3, 100));
	mm.insert(pair<int, int>(8, 30));
	mm.insert(pair<int, int>(3, 40));
	mm.insert(pair<int, int>(1, 70));
	mm.insert(pair<int, int>(7, 100));
	mm.insert(pair<int, int>(8, 50));

	multimap<int, int>::iterator iter;
	for (iter = mm.begin(); iter != mm.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	multimap<int, int>::iterator lower_iter;
	multimap<int, int>::iterator upper_iter;
	lower_iter = mm.lower_bound(3);
	upper_iter = mm.upper_bound(3);

	// [lower_iter, upper_iter) 구간의 모든
	// key값과 value값을 출력한다.
	for (iter = lower_iter; iter != upper_iter; iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	// equal_range를 이용해보자
	pair<multimap<int, int>::iterator,
		multimap<int, int>::iterator> equal_iter;
	equal_iter = mm.equal_range(3);

	// [equal_iter.first, equal_iter.second) 구간의 모든
	// key값과 value값을 출력한다.
	for (iter = equal_iter.first; iter != equal_iter.second; iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	return 0;
}