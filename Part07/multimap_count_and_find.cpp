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

	// count의 parameter는 key값이다.
	cout << "Key 3의 원소의 갯수는 : " << mm.count(3) << endl;

	// find는 parameter key의 맨 처음 반복자를 반환한다.
	// 없다면 mm.end()를 반환한다.
	iter = mm.find(3);		// 3의 맨 처음 반복자를 반환
	if (iter != mm.end())
	{
		cout << iter->first << "의 맨 첫 반복자 value : " <<
			iter->second << endl;
	}

	return 0;
}