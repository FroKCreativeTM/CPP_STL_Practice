#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int left, int right)
{
	return left <= right;
}

int main()
{
	vector<int> vec1;
	vector<int> vec2;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);
	vec1.push_back(60);
	vec1.push_back(70);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	vec2.push_back(30);
	vec2.push_back(40);
	vec2.push_back(50);

	vector<int>::iterator iter;
	iter = find_end(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;
	}

	vec1.clear();
	vec2.clear();

	vec1.push_back(10);
	vec1.push_back(15);
	vec1.push_back(20);
	vec1.push_back(40);
	vec1.push_back(50);
	vec1.push_back(60);
	vec1.push_back(10);
	vec1.push_back(11);
	vec1.push_back(12);
	vec1.push_back(80);

	vec2.push_back(10);
	vec2.push_back(15);
	vec2.push_back(25);

	iter = find_end(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), pred); 
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;
	}

	return 0;
}