#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
	list<int> li;
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_back(40);
	li.push_back(50);

	vector<int>::iterator viter = vec.begin();
	++viter;
	list<int>::iterator liter = li.begin();
	++liter;

	viter = vec.insert(viter, 600);	// 20 ¾Õ¿¡ 600 »ğÀÔ
	liter = li.insert(liter, 600);	// 20 ¾Õ¿¡ 600 »ğÀÔ

	cout << "vector : " << *viter << endl;
	cout << "list : " << *liter << endl;

	cout << "vector : ";
	for (viter = vec.begin(); viter != vec.end(); ++viter)
	{
		cout << *viter << " ";
	}
	cout << endl;

	cout << "list : ";
	for (liter = li.begin(); liter != li.end(); ++liter)
	{
		cout << *liter << " ";
	}
	cout << endl;

	return 0;
}