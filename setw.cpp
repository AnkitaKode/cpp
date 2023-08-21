#include <iostream>
#include <iomanip>
// It aligns rightwards
using namespace std;
int main()
{
    int a = 3, b = 94, c = 567;
    cout << "The value of a without setw is :" << a << endl;
    cout << "The value of b without setw is :" << b << endl;
    cout << "The value of c without setw is :" << c << endl;
    cout << "The value of a is :" << setw(4) << a << endl;
    cout << "The value of b is :" << setw(4) << b << endl;
    cout << "The value of c is :" << setw(4) << c << endl;
    return 0;
}