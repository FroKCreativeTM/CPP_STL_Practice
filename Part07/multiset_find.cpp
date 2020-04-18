#include <iostream>
#include <set>

using namespace std;

int main()
{
	// 기본적으로 멀티셋은 셋과 비교하면 동일한 구조를 가지고 있지만
	// 가장 큰 차이점은 역시 중복되는 원소가 들어갈 수 있다는 점이다.
	// 이 때 중복되는 원소는 그 원소의 right node로 저장된다.
	multiset<int> ms;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	ms.insert(10);

	multiset<int>::iterator iter;
	for (iter = ms.begin(); iter != ms.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = ms.find(30);
	cout << "30 원소의 수 : " << ms.count(30) << endl;
	cout << "iter : " << *iter << endl;

	multiset<int>::iterator lower_iter;
	multiset<int>::iterator upper_iter;

	lower_iter = ms.lower_bound(30);		// 시작 반복자
	upper_iter = ms.upper_bound(30);		// 끝 반복자

	cout << "lower bound : " << *lower_iter << ", upper bound : " << *upper_iter << endl;

	// 30 30이 나오는 이유는 메모리상 30 30 50 이런 식으로 저장되어있기 때문이다.
	cout << "구간 [lower_iter, upper_iter)의 순차열 : ";
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;


	return 0;
}