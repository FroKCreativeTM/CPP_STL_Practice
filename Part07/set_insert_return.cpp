#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;

	// 기본적으로 set의 insert는 pair를 return한다.
	pair<set<int>::iterator, bool> pr;

	pr = s.insert(50);
	s.insert(40);
	s.insert(80);

	if (pr.second == true)		// 삽입 성공시
	{
		cout << *pr.first << " 삽입 성공" << endl;
	}
	else
	{
		cout << *pr.first << "가 이미 있습니다. 삽입 실패" << endl;
	}

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	pr = s.insert(50);			// 두번째 삽입이기 때문에 실패한다.

	if (pr.second == true)		// 삽입 성공시
	{
		cout << *pr.first << " 삽입 성공" << endl;
	}
	else
	{
		cout << *pr.first << "가 이미 있습니다. 삽입 실패" << endl;
	}

	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}