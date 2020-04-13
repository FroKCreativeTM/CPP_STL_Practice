#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	vector<int>::iterator iter = vec.begin() + 2;
	vector<int>::iterator iter2;

	// iter가 가리키는 위치에 정수 100을 삽입하자
	// iter2는 삽입한 정수를 가리키는 반복자

	iter2 = vec.insert(iter, 100);

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "iter : " << *iter2 << endl;

	return 0;
}