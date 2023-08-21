#include <iostream>
using namespace std;
int main()
{
    // Typecasting:Converting one datatype into others.
    int a = 45;
    float b = 45.5;
    cout << "The value of a is " << (float)a << endl;
    // OR cout<<"The value of b is "<<(int)b;

    cout << "The value of b is " << int(b) << endl;
    int c = int(b);
    cout << "The expression is" << a + b << endl;
    cout << "The expression is" << a + int(b) << endl;
    cout << "The expression is" << a + (int)b;

    return 0;
}