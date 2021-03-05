#include <iostream>;

using namespace std;

void main() 
{
	double radius,smass;
	float const pi = 4*atan(1);
	cout << "write the radius in m: " << endl;
	cin >> radius;
	cout << "write the specific mass in kg/m³: " << endl;
	cin >> smass;
	cout << "the mass of the sphere is: " << (4 / 3) * (smass * pi * pow(radius,3)) << "kg";
}