#include <iostream>;
using namespace std;
//2.6
void main()
{
	cout << "years amount annual%" << endl;
	float n, q, j;
	cin >> n >> q >> j;
	cout << q * pow((1 + (j / 100)), n);
	
}