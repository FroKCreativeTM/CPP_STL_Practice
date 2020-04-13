#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	vector<int>::iterator iter;
	vector<int>::iterator iter2;
	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = vec.begin() + 2;
	iter2 = vec.erase(iter); // iter가 가리키는 공간 제거

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// [vec.begin+1, vec.end()) 구간의 원소를 제거
	iter2 = vec.erase(vec.begin() + 1, vec.end());

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}