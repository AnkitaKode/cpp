#include <iostream>
using namespace std;

namespace
{
    int x;
    namespace one
    {
        void display()
        {
            cout << "x is " << x << endl;
        }
    }
}
int main()
{
    x = 10;
    cout << x << endl;
    one::display();

    return 0;
}