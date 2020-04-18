#include <iostream>
#include <set>

using namespace std;

int main()
{
	// 기본적으로 멀티셋은 셋과 비교하면 동일한 구조를 가지고 있지만
	// 가장 큰 차이점은 역시 중복되는 원소가 들어갈 수 있다는 점이다.
	// 이 때 중복되는 원소는 그 원소의 right node로 저장된다.
	multiset<int> ms;
	multiset<int>::iterator iter;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);	
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	iter = ms.insert(10);

	cout << "iter의 원소 : " << *iter << endl;

	for (iter = ms.begin(); iter != ms.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;


	return 0;
}