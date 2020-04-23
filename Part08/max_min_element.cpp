#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point
{
private:
	int x, y;

public:
	explicit Point(int _x = 0, int _y = 0)
		:x(_x), y(_y) {}

public:
	int getX() const { return x; }
	int getY() const { return y; }

	void Print() const { cout << "X : " << x << ", Y : " << y << endl; }
};

bool compare(const Point& lhs, const Point& rhs)
{
	if (lhs.getX() < rhs.getX())
	{
		return true;
	}
	else if (lhs.getX() > rhs.getX())
	{
		return false;
	}
	else
	{
		return lhs.getY() < rhs.getY();
	}
}

int main()
{
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	vector<int>::iterator iter;
	iter = max_element(vec.begin(), vec.end());
	cout << "max element  : " << *iter << endl;

	iter = min_element(vec.begin(), vec.end());
	cout << "min element  : " << *iter << endl;

	vector<Point> pointVec;

	pointVec.push_back(Point(3, 2));
	pointVec.push_back(Point(2, 5));
	pointVec.push_back(Point(1, 5));
	pointVec.push_back(Point(3, 3));
	pointVec.push_back(Point(3, 2));

	vector<Point>::iterator p_iter;
	p_iter = max_element(pointVec.begin(), pointVec.end(), compare);
	cout << "max : "; p_iter->Print();

	return 0;
}