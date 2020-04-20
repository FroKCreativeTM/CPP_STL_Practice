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

	// insert() 리턴 타입 결과를 출력할 pair를 생성하자.
	// first는 어떤 객체의 iterator를 넣고
	// second에는 insert의 반환 결과가 저장된다.
	pair <map<int, int>::iterator, bool> pr;

	// insert 부분은 intelli로 보면 알 수 있뜨시, pair를 이용해서 
	// 저장을 하는 것을 알 수 있다.
	// 이 때 pair 컨테이너를 사용할 때 map의 타입과 동일해야한다는
	// 것을 확인해야된다.
	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));

	// 일부러 second에 false를 반환받기 위해서
	// key값이 있는 것을 넣어본다.
	pr = m.insert(pair<int, int>(5, 30));
	if (!pr.second)
	{
		cout << pr.first->first << "는 이미 있는 key입니다." <<
			endl;
	}
	else
	{
		cout << pr.first->first << "가 성공적으로 저장되었습니다." <<
			endl;
	}

	// 이제 key값이 없는 pair를 넣어보자.
	pr = m.insert(pair<int, int>(9, 100));
	if (!pr.second)
	{
		cout << pr.first->first << "는 이미 있는 key입니다." <<
			endl;
	}
	else
	{
		cout << pr.first->first << "가 성공적으로 저장되었습니다." <<
			endl;
	}

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "Key : " << iter->first
			<< ", Value : " << iter->second << endl;
	}
	cout << endl;

	return 0;

}
