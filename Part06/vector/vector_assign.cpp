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

	// ������ [vec.begin(), vec.end())�� vec2�� �ʱ�ȭ
	vector<int> vec2(vec.begin(), vec.end());

	vector<int>::iterator iter;

	for (iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int> vec3;
	// ������ [vec.begin(), vec.end())�� vec3�� �Ҵ�
	vec3.assign(vec.begin(), vec.end());

	for (iter = vec3.begin(); iter != vec3.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}