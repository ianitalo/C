#include <iostream>;
using namespace std;
void main()
{
    int hours, minutes, seconds, hours2, minutes2, seconds2, day;
    cout << "Time1(hours minutes seconds) ?";
    cin >> hours >> minutes >> seconds;
    cout << "Time2(hours minutes seconds) ?";
    cin >> hours2 >> minutes2 >> seconds2;
    seconds = seconds + seconds2;
    minutes = minutes + minutes2 + (seconds / 60);
    hours = hours + hours2 + (minutes / 60);
    day = hours / 24;
    cout << "Time1 + Time2 = " << day << " days, " << hours % 24 << " hours, " << minutes % 60 << " minutes and " << seconds % 60 << " seconds";
}