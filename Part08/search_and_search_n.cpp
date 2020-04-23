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
	// find�� �������� ��ȯ�� ������
	// search�� �� ó�� ���� ��ȯ�Ѵ�.
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

	// �׷��ٸ� ���Ұ� n�� �ݺ��� ��ġ�� ã�� ������� �������� ������
	// �׷��� �ٷ� search_n �޼ҵ尡 �� �ش��̴�.

	vec1.clear();

	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(50);
	vec1.push_back(60);

	// ���� 40�� 2�� �ݺ��� ���� ã�´�.
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

	// Ư�� ������ �ְ� �� ���ǿ� ���缭 �ɷ����� ��ĵ� �����Ѵ�.
	iter = search_n(vec1.begin(), vec1.end(), 3, 30, pred);
	if (iter != vec1.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter - 1 : " << *(iter - 1) << endl;
		cout << "iter + 1 : " << *(iter + 1) << endl;
	}

	return 0;
}