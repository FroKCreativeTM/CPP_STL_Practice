#include <iostream>
#include <functional>

using namespace std;

int main()
{
	less<int> oLess;
	cout << oLess(10, 20) << endl;

	return 0;
}