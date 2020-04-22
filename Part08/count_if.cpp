#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool pred(int n)
{
	return 25 < n;
}

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

	// 구간 [vec.begin(), vec.end())에서 조건에 맞는 값을 카운트한다.
	int n = count_if(vec.begin(), vec.end(), pred);
	cout << "25 이상의 갯수 : " << n << endl;

	return 0;
}