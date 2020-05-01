#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class Greater
{
public : 
	bool operator()(const T& lhs, const T& rhs)
	{
		return lhs > rhs;
	}
};

int main()
{
	vector<int> v;
	v.push_back(50);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(10);

	vector<int> v2;
	v2.push_back(300);
	v2.push_back(200);
	v2.push_back(100);

	vector<int> v3(10);	// size 10¿Œ v3 ∫§≈Õ
	vector<int>::iterator iter_end;
	// STL greater
	// iter_end = merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin(), greater<int>());
	iter_end = merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin(), 
		Greater<int>());

	cout << "v1 : ";
	for (auto iter = 0; iter < v.size(); ++iter)
	{
		cout << v[iter] << " ";
	}
	cout << endl;

	cout << "v2 : ";
	for (auto iter = 0; iter < v2.size(); ++iter)
	{
		cout << v2[iter] << " ";
	}
	cout << endl;

	cout << "v3 : ";
	for (auto iter = 0; iter < v3.size(); ++iter)
	{
		cout << v3[iter] << " ";
	}
	cout << endl;

	return 0;
}