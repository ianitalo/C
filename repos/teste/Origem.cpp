#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d, e, f, x, y;
    cout << "A? "; cin >> a;
    cout << "B? "; cin >> b;
    cout << "C? "; cin >> c;
    cout << "D? "; cin >> d;
    cout << "E? "; cin >> e;
    cout << "F? "; cin >> f;
    if ((a * e) == (b * d))
    {
        cerr << "S invalida";
    }
    if ((a == b) && (a == d) && (a == e) && c == 0 && f == 0) 
    {
        cerr << "S infinita";
    }
    cout << "x = " << ((c * e) - (b * f)) / ((a * e) - (b * d)) << endl;
    cout << "y = " << ((a * f) - (c * d)) / ((a * e) - (b * d));
}