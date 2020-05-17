#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1 : ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout));
	cout << endl;

	cout << "v1 : ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;

	list<int> lt1;
	lt1.push_back(100);
	lt1.push_back(200);
	lt1.push_back(300);

	cout << "lt1 : ";
	transform(lt1.begin(), lt1.end(), v1.begin(), ostream_iterator<int>(cout, " "), plus<int>());
	cout << endl;

	return 0;
}