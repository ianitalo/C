#include <iostream>;
using namespace std;

void main()
{
	int x1, x2, x3, y1, y2, y3;
	double l1, l2, l3;
	cout << "coordinates of the 3 vertices (x1 y1 x2 y2 x3 y3): ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	l1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	l2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	l3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	cout << l1 << endl << l2 << endl << l3 << endl;
	double s = (l1 + l2 + l3) / 2;
	cout << "area = " << sqrt(s * (s - l1) * (s - l2) * (s - l3));
}
