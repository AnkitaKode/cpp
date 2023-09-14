#include <iostream>
using namespace std;
// template<typename identifier>ret_type fun_name(parameters){}

template <typename max>
void num(max x, max y);

template <typename mytype>
void display(mytype x, mytype y)
{
    cout << "you have passes " << x << " and " << y << endl;
}
template <typename T>
void show(T x, int y)
{
    for (int counter = 1; counter <= y; counter++)
    {
        cout << x << endl;
    }
}

int main()
{
    display(10, 80);
    display(1.2, 92.0);
    display("kit", "katy");
    cout << max(10, 90) << endl;
    cout << max(10.89, 90.97) << endl;
    show("ankita ", 3);

    return 0;
}
