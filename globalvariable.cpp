#include <iostream>
using namespace std;
void sum();
int a; // for global variable value will be 0
int main()
{
    sum();
    int a;
    return 0;
}
void sum()
{
    // int a; for local variable any garbage value
    cout << a;
}