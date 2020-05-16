#include <iostream>
#include <functional>

using namespace std;

int main()
{
	// 바인더란 이항 함수자를 단항 함수자로 변환하는 것이다.
	// STL은 두가지의 바인더를 지원한다.

	// less의 첫 인자를 10으로 고정한 단항 조건자 binder를 생성한다.
	binder1st<less<int>> binder1st = bind1st(less<int>(), 10);

	// binder는 첫 번째 인자를 10으로 고정한 less
	cout << binder1st(5) << endl;
	// binder는 첫 번째 인자를 10으로 고정한 less
	cout << binder1st(10) << endl;
	// binder는 첫 번째 인자를 10으로 고정한 less
	cout << binder1st(20) << endl;

	// 위 문자는 다음처럼도 쓸 수 있다.
	cout << bind1st(less<int>(), 10)(5) << endl;
	// 위 문자는 다음처럼도 쓸 수 있다.
	cout << bind1st(less<int>(), 10)(10) << endl;
	// 위 문자는 다음처럼도 쓸 수 있다.
	cout << bind1st(less<int>(), 10)(20) << endl;

	// less의 두번째 인자를 10으로 고정한 단항 
	binder2nd<less<int>> binder2nd = bind2nd(less<int>(), 10);

	// binder는 두번째 인자를 10으로 고정한 less
	cout << binder2nd(5) << endl;
	// binder는 두번째 인자를 10으로 고정한 less
	cout << binder2nd(10) << endl;
	// binder는 두번째 인자를 10으로 고정한 less
	cout << binder2nd(20) << endl;

	// 위 문자는 다음처럼도 쓸 수 있다.
	cout << bind2nd(less<int>(), 10)(5) << endl;
	// 위 문자는 다음처럼도 쓸 수 있다.
	cout << bind2nd(less<int>(), 10)(10) << endl;
	// 위 문자는 다음처럼도 쓸 수 있다.
	cout << bind2nd(less<int>(), 10)(20) << endl;

	return 0;
}