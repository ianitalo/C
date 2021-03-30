#include <iostream>;
#include <ctime>;
using namespace std;

time_t timeElapsed()
{
	static time_t time1 = time(nullptr);
	time_t time2 = time(nullptr);
	return time2 - time1;	
}

void main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << timeElapsed();
	}
}