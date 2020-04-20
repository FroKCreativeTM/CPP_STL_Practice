#include <iostream>
#include <map>

using namespace std;

int main()
{
	// map 컨테이너는 hash타입처럼 key와 value를 가지는
	// 이진 트리이다. 이 때 key를 기반으로 이진 트리가 구성이 되며,
	// less 조건자를 바탕으로 생성이 된다.
	// 아래처럼 생성하면 key type은 int, value 타입도 int가 된다.
	map<int, int> m;

	// [] 연산자를 이용해서 어떤 특정 index에 있는 
	// value값을 갱신하거나 추가 할 수 있다.
	// 즉 insert를 대체 가능하다는 뜻이다.
	m[5] = 100;
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	// key값이 5에 value값을 200으로 갱신한다.
	m[5] = 200;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	return 0;
}