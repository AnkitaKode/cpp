#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::showpos | ios::showpoint);
    cout.unsetf(ios::showpos);
    auto flag = ios::showpos | ios::showpoint | ios::showbase;
    cout.flags(flag);
    cout << 100 << endl;
    cout << -34.563 << endl;
    cout << 10.34 << endl;

    cout.precision(4);
    cout << 123.456 << endl;

    cout.width(10);
    cout << "hyy";
    cout << endl;

    cout.fill('*');
    cout.width(10);
    cout << "bye";

    bool boolvalue;
    cin >> boolalpha >> boolvalue;
    cout << boolalpha << boolvalue;
    cout << endl;

    return 0;
}