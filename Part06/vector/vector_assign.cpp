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

	// 순차열 [vec.begin(), vec.end())로 vec2를 초기화
	vector<int> vec2(vec.begin(), vec.end());

	vector<int>::iterator iter;

	for (iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int> vec3;
	// 순차열 [vec.begin(), vec.end())로 vec3을 할당
	vec3.assign(vec.begin(), vec.end());

	for (iter = vec3.begin(); iter != vec3.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}