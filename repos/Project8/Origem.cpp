#include <iostream>;
using namespace std;

void main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < 0 || b < 0 || c < 0)
	{
		cout << "u are not suposed to use negative numbers" << endl;
	}
	if (a >= b && a >= c)
	{		
		if (b >= c)
		{
			cout << a << " is the largest and " << c << " is the smallest" << endl;
			cout << "order : " << " "<< a << " " << b << " " <<  c << endl;
			
		}
		else
		{
			cout << a << " is the largest and " << b << " is the smallest" << endl;
			cout << "order : " << a << " " << c << " " << b << endl;
		}
		if (a > (b + c))
		{
			cout << "it's not possible to build a triangle " << endl;
		}
		else
		{
			cout << "you can build a triangle with this :)" << endl;
		}
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			cout << b << " is the largest and " << c << " is the smallest" << endl;
			cout << "order : " << " " << b << " " << a << " " << c << endl;

		}
		else
		{
			cout << b << " is the largest and " << a << " is the smallest" << endl;
			cout << "order : " << b << " " << c << " " << a << endl;
		}
		if (b > (a + c))
		{
			cout << "it's not possible to build a triangle " << endl;
		}
		else
		{
			cout << "you can build a triangle with this :)" << endl;
		}
	}
	else if (c >= b && c >= a)
	{
		if (b >= a)
		{
			cout << c << " is the largest and " << a << " is the smallest" << endl;
			cout << "order : " << " " << c << " " << b << " " << a << endl;

		}
		else
		{
			cout << c << " is the largest and " << b << " is the smallest" << endl;
			cout << "order : " << c << " " << a << " " << b << endl;
		}
		if (c > (a + b))
		{
			cout << "it's not possible to build a triangle " << endl;
		}
		else
		{
			cout << "you can build a triangle with this :)" << endl;
		}
	}
}