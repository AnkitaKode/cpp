#include <iostream>
using namespace std;

template <class mytype>
class myclass
{
    mytype p1;
    mytype p2;

public:
    myclass(mytype x, mytype y)
    {
        p1 = x;
        p2 = y;
    }
    void show()
    {
        cout << "i got p1 = " << p1 << " and p2 = " << p2 << endl;
    }
};
int main()
{
    myclass<int> intobject(22, 44);
    myclass<string> stringobject("kit", "kat");
    intobject.show();
    stringobject.show();

    return 0;
}