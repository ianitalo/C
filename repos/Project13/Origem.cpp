#include <iostream>;
using namespace std;
//3.1
double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double l1, l2, l3;
	l1 = distance(x1, y1, x2, y2);
	l2 = distance(x3, y3, x1, y1);
	l3 = distance(x3, y3, x2, y2);
	cout << "distance 1 = " << l1 << endl << "distance 2 = " << l2 << endl << "distance 3 = " << l3 << endl;
	double s = (l1 + l2 + l3) / 2;
	double area = sqrt(s * (s - l1) * (s - l2) * (s - l3)); //Heron formula
	return area;
}

void main()
{
	int x1, x2, x3, y1, y2, y3;
	cout << "coordinates of the 3 vertices (x1 y1 x2 y2 x3 y3): ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "the area is: " << area(x1, y1, x2, y2, x3, y3);
}