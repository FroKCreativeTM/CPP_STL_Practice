#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Point
{
private : 
	int x, y;

public : 
	explicit Point(int _x = 0, int _y = 0)
		:x(_x), y(_y) {}

public : 
	int getX() const { return x; }
	int getY() const { return y; }

	void Print() const { cout << "X : " << x << ", Y : " << y << endl; }
};

bool XCompare(const Point& lhs, const Point& rhs)
{
	return lhs.getX() < rhs.getX();
}

bool YCompare(const Point& lhs, const Point& rhs)
{
	return lhs.getY() < rhs.getY();
}

int main()
{
	int a = 10, b = 20;
	int r;

	r = max(a, b);
	cout << "max : " << r << endl;
	r = min(a, b);
	cout << "max : " << r << endl;

	Point pt1(5, 8);
	Point pt2(3, 9);
	Point pt3;

	pt3 = max(pt1, pt2, XCompare);
	cout << "x max : "; pt3.Print();
	pt3 = max(pt1, pt2, YCompare);
	cout << "y max : "; pt3.Print();

	return 0;
}