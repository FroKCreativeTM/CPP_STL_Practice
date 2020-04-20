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

	cout << m[8] << " ";
	cout << m[7] << " ";
	cout << m[5] << " ";
	cout << m[4] << " ";
	cout << m[3] << " ";
	cout << m[1] << " ";

	return 0;
}