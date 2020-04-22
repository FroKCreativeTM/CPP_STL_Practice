#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(50);
	vec.push_back(30);
	vec.push_back(90);

	for (auto i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	// 구간 [vec.begin(), vec.end())에서 30원소의 갯수를 반환
	int n = count(vec.begin(), vec.end(), 30);
	cout << "30의 갯수 : " << n << endl;

	return 0;
}