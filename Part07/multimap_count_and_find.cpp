#include <iostream>
#include <map>
using namespace std;

int main()
{
	// multimap�� �����ϴ�.
	// multisetó�� key �ߺ��� �����ϴ�. (�̷��� ���� �ǹ̰� �ֳ�)
	// �׸��� �� �ߺ��Ǵ� ���� right ���� ����ȴ�.
	multimap<int, int> mm;

	mm.insert(pair<int, int>(5, 100));
	mm.insert(pair<int, int>(3, 100));
	mm.insert(pair<int, int>(8, 30));
	mm.insert(pair<int, int>(3, 40));
	mm.insert(pair<int, int>(1, 70));
	mm.insert(pair<int, int>(7, 100));
	mm.insert(pair<int, int>(8, 50));

	multimap<int, int>::iterator iter;
	for (iter = mm.begin(); iter != mm.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	// count�� parameter�� key���̴�.
	cout << "Key 3�� ������ ������ : " << mm.count(3) << endl;

	// find�� parameter key�� �� ó�� �ݺ��ڸ� ��ȯ�Ѵ�.
	// ���ٸ� mm.end()�� ��ȯ�Ѵ�.
	iter = mm.find(3);		// 3�� �� ó�� �ݺ��ڸ� ��ȯ
	if (iter != mm.end())
	{
		cout << iter->first << "�� �� ù �ݺ��� value : " <<
			iter->second << endl;
	}

	return 0;
}