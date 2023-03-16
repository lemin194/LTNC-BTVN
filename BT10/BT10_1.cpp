#include <bits/stdc++.h>
using namespace std;
struct Point 
{
	double x, y;
	Point(){};
	Point(double _x, double _y)
	{
		x = _x;
		y = _y;
	}	
};
void print(Point test)
{
	cout << &test << endl;
	cout << test.x << " " << test.y << endl;
}
void print_real(const Point& test)
{
	cout << &test << endl;
	cout << test.x << " " << test.y << endl;
}
Point mid_point(const Point a, const Point b)
{
	Point res;
	res.x = (a.x + b.x)/2;
	res.y = (a.y + b.y)/2;
	return res;
}
int main ()
{
	Point a(5, 3);
	cout << &a << endl;
	print(a);
	print_real(a);
	return 0;
}
