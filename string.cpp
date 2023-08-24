#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    string name = "ankita";
    string lastname = "dev";

    string fullname;
    fullname = name + " " + lastname;

    if (fullname == "ankita dev")
        cout << "name matched";
    else
        cout << "name mismatched";

    return 0;
}