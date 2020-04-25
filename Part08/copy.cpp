#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// copy 메소드를 통해서 어떤 컨테이너의 원소를 동일하게 다른 동일하거나 더 큰 컨테이너에 복사할 수 있다.
	vector<int> vec1;
	vector<int> vec2(5);

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);

	cout << "vector1 element : ";
	for (auto iter = vec1.begin(); iter != vec1.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	copy(vec1.begin(), vec1.end(), vec2.begin());

	cout << "vector2 element : ";
	for (auto iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	///////////////////////////////////////////////////////////////
	// copy_backward()
	///////////////////////////////////////////////////////////////

	vector<int> vec3(10);

	vector<int>::iterator iter = copy_backward(vec1.begin(), vec1.end(), vec3.end());	// 뒤에다가 복사를 하는 방식.

	cout << "vector3 element : ";
	for (size_t i = 0; i < vec3.size(); ++i)
	{
		cout << vec3[i] << " ";
	}
	cout << endl;

	return 0;
}