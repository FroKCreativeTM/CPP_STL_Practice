#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Accumuation
{
private : 
	int total;

public : 
	explicit Accumuation(int init = 0) : total(init) {}
	void operator()(int& r)
	{
		total += r;
		r = total;
	}
};

// 출력 매개변수로 사용하기 위해 &(레퍼런스)를 사용
void Func(int& r)
{
	r += 5;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << endl;

	for_each(v.begin(), v.end(), Accumuation(0));
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << endl;

	for_each(v.begin(), v.end(), Func);
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << endl;

	return 0;
}