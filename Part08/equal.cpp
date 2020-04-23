#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int left, int right)
{
	return abs(right - left) < 5;
}

int main()
{
	vector<int> vec1;
	vector<int> vec2;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);

	vec2.push_back(10);
	vec2.push_back(20);
	vec2.push_back(30);
	vec2.push_back(40);
	vec2.push_back(50);

	// [vec1.begin(), vec1.end()), [vec1.begin(), vec2.begin() + 3)을 비교
	if (equal(vec1.begin(), vec1.end(), vec2.begin()))
	{
		cout << "두 순차열은 같습니다." << endl;
	}

	vec1.clear();
	vec2.clear();

	vec1.push_back(10);
	vec1.push_back(21);
	vec1.push_back(30);

	vec2.push_back(10);
	vec2.push_back(20);
	vec2.push_back(33);

	// [vec1.begin(), vec1.end()), [vec1.begin(), vec2.begin() + 3)을 비교
	if (equal(vec1.begin(), vec1.end(), vec2.begin(), pred))
	{
		cout << "두 순차열은 같습니다." << endl;
	}

	return 0;
}