#include <iostream>

using namespace std;

// 함수 객체 조건자
class CLessFunctor
{
public : 
	bool operator()(int lhs, int rhs) const
	{
		return lhs < rhs;
	}
};

// 함수 조건자
bool LessFunc(int left, int right)
{
	return left < right;
}

int main()
{
	// 함수 포인터 조건자
	bool(*LessPtr)(int, int) = LessFunc;
	CLessFunctor cLessFunctor;

	// 모두 bool 형식을 반환
	// 1. 함수 객체로 10과 20을 비교
	cout << cLessFunctor(10, 20) << endl;

	// 2. 함수로 직접 10과 20을 비교
	cout << LessFunc(10, 20) << endl;

	// 3. 함수 포인터로 10과 20을 비교
	cout << LessPtr(10, 20) << endl;

	// 전부 true 즉 1을 반환한다.

	return 0;
}