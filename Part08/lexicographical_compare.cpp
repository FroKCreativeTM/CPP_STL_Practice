#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class Less
{
public : 
	bool operator() (const T& lhs, const T& rhs)
	{
		return lhs < rhs;
	}
};

int main()
{
	vector<int> vec1;
	vector<int> vec2;
	vector<int> vec3;

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);

	vec2.push_back(10);
	vec2.push_back(20);
	vec2.push_back(50);

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);

	// lexicographical_compare는 less 즉 사전순으로 비교한다.

	if (lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end()))
	{
		cout << "v1 < v2" << endl;
	}
	else
	{
		cout << "v1 >= v2" << endl;
	}

	if (lexicographical_compare(vec1.begin(), vec1.end(), vec3.begin(), vec3.end()))
	{
		cout << "v1 < v3" << endl;
	}
	else
	{
		cout << "v1 >= v3" << endl;
	}

	vec2.clear();

	vec2.push_back(10);
	vec2.push_back(25);
	vec2.push_back(30);

	if (lexicographical_compare(vec1.begin(), vec1.end(), 
		vec2.begin(), vec2.end(), less<int>()))
	{
		cout << "v1 < v2" << endl;
	}
	else
	{
		cout << "v1 >= v2" << endl;
	}

	if (lexicographical_compare(vec1.begin(), vec1.end(), 
		vec3.begin(), vec3.end(), greater<int>()))
	{
		cout << "v1 < v3" << endl;
	}
	else
	{
		cout << "v1 >= v3" << endl;
	}

	if (lexicographical_compare(vec1.begin(), vec1.end(), 
		vec2.begin(), vec2.end(), Less<int>()))
	{
		cout << "v1 < v2" << endl;
	}
	else
	{
		cout << "v1 >= v2" << endl;
	}



	return 0;
}