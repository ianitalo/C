#include <iostream>;
#include <cmath>;
using namespace std;

void main()
{
	cout << fixed;
	cout.precision(3);
	float a, b, c;
	cin >> a >> b >> c;
	float delta = (pow(b, 2) - 4 * a * c);
	if (delta < 0)
	{
		cout << "The equation has 2 complex roots: " << -b / (2 * a) << " + " << sqrt(-delta) / (2 * a) 
			<< "i " << "and " << -b / (2 * a) << " - " << sqrt(-delta) / (2 * a) << "i";
	}
	else if (delta == 0)
	{
		cout << "The equation has 2 equal real roots: " << -b / (2 * a);
	}
	else
	{
		cout << "The equation has 2 different real roots: " << -b / (2 * a) << " + " << sqrt(delta) / (2 * a)
			 << " and " << -b / (2 * a) << " - " << sqrt(delta) / (2 * a);
	}
}