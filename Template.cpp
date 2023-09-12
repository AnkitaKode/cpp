#include <iostream>
using namespace std;
int main()
{
    cout << "current line is " << __LINE__ << endl;
    cout << "current file is " << __FILE__ << endl;
    cout << "date of translation of source code to object is " << __DATE__ << endl;
    cout << "compile time " << __TIME__ << endl;
    cout << "standard cpp code " << __STDC__ << endl;
    cout << "standard cpp conforming " << __cplusplus << endl;

#line 1000 "annie.txt"
    cout << "current file is " << __FILE__ << endl;
    cout << "current line is " << __LINE__ << endl;

    return 0;
}