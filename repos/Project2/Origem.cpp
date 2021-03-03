#include <iostream>
#include <iomanip>
using namespace std;

void main() 
{
	cout << fixed;
	cout << setprecision(3);
	float a, b, c;
	cout << "Please, input 3 integer numbers" << endl << "A ? ";
	cin >> a;
	cout << "B ? ";
	cin >> b;
	cout << "C ? ";
	cin >> c;	
	float mean;
	mean = (a + b + c) / 3;
	cout << "mean = " << (a+b+c)/3 << endl;
	cout << "A-mean = " << a - mean << endl;
	cout << "B-mean = " << b - mean << endl;
	cout << "C-mean = " << c - mean << endl;

}