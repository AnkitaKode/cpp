#include <iostream>
using namespace std;
template <typename T1, typename T2>
void display(T1 x, T2 y);
int main()
{
    display("ankita", "k");
    display("ankita", 18);
    display(29.6, 3.76);
    display(32, 65);
    return 0;
}
template <typename T1, typename T2>
void display(T1 x, T2 y)
{
    cout << x << " and " << y << endl;
}