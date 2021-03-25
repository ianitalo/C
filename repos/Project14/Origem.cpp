#include <iostream>;
using namespace std;
//3.2
bool isprime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

void main()
{
	int x;
	cin >> x;
	if (isprime(x))
	{
		cout << x << " eh primo";
	}
	else
	{
		cout << x << " n eh primo";
	}
	
}
