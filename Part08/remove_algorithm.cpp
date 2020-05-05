#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool pred(int n)
{
	return n <= 30;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// 어떤 데이터를 지우고 그 다음 노드를 앞으로 잡아 댕긴다.
	// 이 반복자는 맨 마지막을 가리킨다.
	// 그리고 remove는 맨 뒤에 그 직전 노드를 복사한다.

	// 이러한 방식을 논리적 제거라고 한다.
	vector<int>::iterator iter_end = remove(v.begin(), v.end(), 30);		
	cout << *iter_end << endl;

	//for (auto i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;
	
	// 실제 vector의 사이즈까지 바꾸려면 erase를 사용해야한다.
	// 맨 마지막 노드를 지우고 벡터 사이즈를 바꾸자.
	v.erase(iter_end, v.end());

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// 당연하게도 remove도 다른 변경 알고리즘처럼 if 함수를 콜백으로 줄 수 있다.
	// 단 이런 경우 size는 변하지 않기 때문에 뒤에 나머지 데이터들이 중복 된다.
	iter_end = remove_if(v.begin(), v.end(), pred);

	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// 이런 중복 데이터를 unique를 통해서 지워줄 수 있다.
	// 단 인접 중복 데이터의 삭제이기 때문에 만약 정렬이 되어있지 않다면
	// 삭제되지 않을 수 있다.
	// 또 정확히는 remove처럼 논리적 제거이기 때문에 결국 전체 사이즈는 변화하지 않는다.
	sort(v.begin(), v.end());
	iter_end = unique(v.begin(), v.end());

	for (auto iter = v.begin(); iter != iter_end; ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}