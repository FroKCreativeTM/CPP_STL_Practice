#include <iostream>
#include <functional>

using namespace std;

int main()
{
	plus<int> oPlus;

	cout << oPlus(10, 20) << endl;
	cout << oPlus.operator()(10, 20) << endl;

	cout << plus<int>()(10, 20) << endl;
	cout << plus<int>().operator()(10, 20) << endl;

	return 0;
}