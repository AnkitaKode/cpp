#include <iostream>
using namespace std;

//declaration
namespace
{
    int x;
    void display();

}

//define
namespace
{
    void display()
    {
        cout << "x is " << x << endl;
    }
}

int main()
{
    x = 11;
    display();
    return 0;
}