#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string str;
    int t;
    while (t--)
    {
        getline(cin, str);
        cout << str << " : newline" << endl;
    }
    return 0;
}