#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intVec;

	intVec.push_back(10);
	intVec.push_back(20);
	intVec.push_back(30);
	intVec.push_back(40);
	intVec.push_back(50);

	vector<int>::iterator iter;
	vector<int>::reverse_iterator riter;

	for (iter = intVec.begin(); iter != intVec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	for (riter = intVec.rbegin(); riter != intVec.rend(); ++riter)
		cout << *riter << " ";
	cout << endl;

	return 0;
}