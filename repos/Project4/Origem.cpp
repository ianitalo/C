#include <iostream>;
using namespace std;

void main()
{
	float a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << (c * e - b * f) / (a * e - b * d) << endl;
	cout << (a * f - c * d) / (a * e - b * d);	
}