#include <iostream>;
using namespace std;

void main()
{
	int a, b;
	cin >> a >> b;
	if ((a < 0 && b > 0) || (a > 0 && b < 0))
	{
		cout << a + b << endl;
	}
	else if (a > 0)
	{
		if ((INT_MAX - a) < b)
		{
			cout << "sum overflow" << endl;
		}
		else
		{
			cout << a + b << endl;
		}
	}
	else if (a < 0)
	{
		if ((INT_MIN - a) > b)
		{
			cout << "sum underflow" << endl;
		}
		else
		{
			cout << a + b << endl;
		}
	}
		
}