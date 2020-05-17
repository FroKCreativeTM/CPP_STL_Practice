#include <iostream>
#include <algorithm>
#include <vector>
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

	vector<int> v2;

	// inserter란 insert_iterator 객체를 생성하고, 컨테이너의 insert 멤버 함수를 호출하여
	// 삽입 모드로 돌아가게 한다.
	copy(v1.begin(), v1.end(), inserter<vector<int>>(v2, v2.begin()));

	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;



	return 0;
}