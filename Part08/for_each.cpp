#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int n)
{
	cout << n << " ";
}

class PrintFunctor
{
private : 
	char c;

public: 
	explicit PrintFunctor(char _c = ' ') : c(_c) {}
	void operator() (int n) const
	{
		cout << n << c;
	}
};

int main()
{
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	for_each(vec.begin(), vec.end(), print);
	cout << endl;
	for_each(vec.begin(), vec.begin() + 3, print);
	cout << endl;

	for_each(vec.begin(), vec.end(), PrintFunctor());
	cout << endl;
	for_each(vec.begin(), vec.end(), PrintFunctor('.'));
	cout << endl;
	for_each(vec.begin(), vec.end(), PrintFunctor('\n'));
	cout << endl;

	return 0;
}