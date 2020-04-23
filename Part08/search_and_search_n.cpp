#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int left, int right)
{
	return abs(right - left) <= 5;
}

int main()
{
	// find는 마지막을 반환을 하지만
	// search는 맨 처음 열을 반환한다.
	vector<int> vec1;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);
	vec1.push_back(60);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	vector<int> vec2;

	vec2.push_back(30);
	vec2.push_back(40);
	vec2.push_back(50);

	vector<int>::iterator	 iter;
	iter = search(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter - 1 : " << *(iter - 1) << endl;
		cout << "iter + 1 : " << *(iter + 1) << endl;
	}

	// 그렇다면 원소가 n번 반복한 위치를 찾는 방법또한 존재하지 않을까
	// 그렇다 바로 search_n 메소드가 그 해답이다.

	vec1.clear();

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(50);
	vec1.push_back(60);

	// 원소 40이 2번 반복한 곳을 찾는다.
	iter = search_n(vec1.begin(), vec1.end(), 2, 40); 
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter - 1 : " << *(iter - 1) << endl;
		cout << "iter + 1 : " << *(iter + 1) << endl;
	}

	vec1.clear();

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(32);
	vec1.push_back(28);
	vec1.push_back(33);
	vec1.push_back(40);
	vec1.push_back(50);

	// 특정 조건을 주고 그 조건에 맞춰서 걸러내는 방식도 존재한다.
	iter = search_n(vec1.begin(), vec1.end(), 3, 30, pred);
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter - 1 : " << *(iter - 1) << endl;
		cout << "iter + 1 : " << *(iter + 1) << endl;
	}

	return 0;
}