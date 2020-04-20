#include <iostream>
#include <map>

using namespace std;

int main()
{
	// map 컨테이너는 hash타입처럼 key와 value를 가지는
	// 이진 트리이다. 이 때 key를 기반으로 이진 트리가 구성이 되며,
	// less 조건자를 바탕으로 생성이 된다.
	// 아래처럼 생성하면 key type은 int, value 타입도 int가 된다.
	// 이 경우는 key값의 저장이 greater식으로 바뀐다.
	map<int, string, greater<int>> m;

	// [] 연산자를 이용해서 어떤 특정 index에 있는 
	// value값을 갱신하거나 추가 할 수 있다.
	// 즉 insert를 대체 가능하다는 뜻이다.
	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";

	map<int, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	// 찾기는 시퀀스 컨테이너, set, multiset에서 했드시
	// find를 이용하거나 아니면, upper_bound, lower_bound를 이용해서
	// 찾는 편이다.
	// multi에서는 같은 key값이 여러 개 있을 수 있으니 bound가 
	// 좋겠지만 이거는 single 연관 컨테이너다.

	// 여기서 find에는 key값을 넣어서 찾아주는 방식이다.
	iter = m.find(5);

	cout << "find를 이용한 방법" << endl;
	if (iter != m.end())
	{
		cout << iter->first << "에 할당된 value값 : "
			<< iter->second << endl;
	}


	map<int, string>::iterator lower_iter;
	map<int, string>::iterator upper_iter;
	lower_iter = m.lower_bound(5);
	upper_iter = m.upper_bound(5);

	cout << "bound를 이용한 방법" << endl;
	cout << "범위는 [lower_iter, upper_iter)" << endl;
	for (iter = lower_iter; iter != upper_iter; iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	pair<map<int, string>::iterator,
		map<int, string>::iterator> iter_pr;
	iter_pr = m.equal_range(5);

	cout << "iterator pair를 이용한 방법" << endl;
	cout << "범위는 [iter_pr.first, iter_pr.second)" << endl;
	for (iter = iter_pr.first; iter != iter_pr.second; iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;
	return 0;
}