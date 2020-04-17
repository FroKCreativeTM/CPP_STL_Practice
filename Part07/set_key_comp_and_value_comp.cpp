#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int, less<int>> ls;
	set<int, greater<int>> gs;

	ls.insert(50);
	ls.insert(80);
	ls.insert(40);

	gs.insert(50);
	gs.insert(80);
	gs.insert(40);

	set<int, less<int>>::key_compare ls_cmp = ls.key_comp();
	cout << ls_cmp(10, 20) << endl; // 10 < 20 연산

	set<int, greater<int>>::key_compare gs_cmp = gs.key_comp();
	cout << ls_cmp(10, 20) << endl; // 10 > 20 연산

	cout << "key_compare type : " << typeid(ls.key_comp()).name() << endl;
	cout << "key_compare type : " << typeid(gs.key_comp()).name() << endl;
	cout << "value_compare type : " << typeid(ls.value_comp()).name() << endl;
	cout << "value_compare type : " << typeid(gs.value_comp()).name() << endl;

	return 0;
}