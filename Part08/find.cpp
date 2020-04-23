#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int n)
{
	return 35 < n;
}

int main()
{
	vector<int> vec1;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	vector<int>::iterator iter;
	iter = find(vec1.begin(), vec1.end(), 20);

	if (iter != vec1.end())
	{
		cout << *iter << "을 찾았습니다." << endl;
	}

	iter = find_if(vec1.begin(), vec1.end(), pred);

	if (iter != vec1.end())
	{
		cout << *iter << "을 찾았습니다." << endl;
	}

	return 0;
}