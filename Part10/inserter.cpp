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

	// inserter�� insert_iterator ��ü�� �����ϰ�, �����̳��� insert ��� �Լ��� ȣ���Ͽ�
	// ���� ���� ���ư��� �Ѵ�.
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