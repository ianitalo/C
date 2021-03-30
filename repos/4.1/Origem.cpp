#include <iostream>;
using namespace std;

void readArray(int a[], size_t nElem)
{
	for (int i = 0; i <= nElem; i++)
	{
		cout << "index " << i << " = ";
		cin >> a[i];
	}
}
int findValueInArray(const int a[], size_t nElem, int value, size_t pos1=0,size_t pos2=5)
{
	for (int i = pos1; i <= pos2; i++)
	{
		if (a[i] == value)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[10],nElem = 5,value;
	readArray(a,nElem);
	size_t pos1, pos2;

	for (int i = 0; i <= nElem; i++)
	{
		cout << "the element with index " << i << " is " << a[i] << endl;
	}
	cout << "value to search : ";
	cin >> value;
	cout << "range : ";
	cin >> pos1 >> pos2;
	cout << findValueInArray(a, nElem, value,pos1,pos2);
	return 0;
}