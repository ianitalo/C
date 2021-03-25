#include <iostream>;
using namespace std;
//2.4

void main()
{
	int w;
	cin >> w;
	if (w <= 500)
	{
		cout << "5 euros" << endl;
	}
	else if ((w > 500) && (w <= 1000))
	{
		if (w % 100 == 0)
		{
			cout << 5 + (((w - 500) / 100) * 1.5) << " euros";
		}
		else
		{
			cout << 5 + ((((w - 500) / 100)+1) * 1.5) << " euros";
		}
	}
	else
	{
		if (w % 250 == 0)
		{
			cout << 12.5 + (((w - 1000) / 250) * 5) << " euros";
		}
		else
		{
			cout << 12.5 + ((((w - 1000) / 250)+1) * 5) << " euros";
		}
	}


}
