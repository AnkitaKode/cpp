#include <iostream>
#include <sstream>
using namespace std;
int main()
{

    string number = "22";
    stringstream sso;
    sso << number;
    int input;
    sso >> input;
    cout << input + 2 << endl;
    cout << number + "2" << endl;

    return 0;
}