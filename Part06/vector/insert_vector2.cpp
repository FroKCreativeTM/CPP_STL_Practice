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

	vector<int>::iterator iter = vec.begin() + 2;

	// iter가 가리키는 위치에 100을 3개 삽입
	vec.insert(iter, 3, 100);

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//////////////////////////////////////////////////
	vector<int> vec2;
	vec2.push_back(100);
	vec2.push_back(200);
	vec2.push_back(300);

	iter = vec2.begin() + 1;

	// iter 이후에 vec을 vec2에 삽입한다.
	vec2.insert(iter, vec.begin(), vec.end());

	for (iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}