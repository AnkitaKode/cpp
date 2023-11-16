#include <iostream>
#include <iomanip>

using namespace std;

ostream &rightarrow(ostream &output)
{
    output << "cool name dude --> ";
    return output;
}

istream &getname(istream &input)
{
    cout << " Enter your name please" << endl;
    return input;
}
int main()
{
    string name;
    cin >> getname >> name;
    cout << rightarrow << name;

    cout << endl;

    cout << "hyy" << endl;
    cout << hex << 100 << endl;

    cout << setw(10) << setfill('*') << "annie"
         << endl;

    cout << "ankita";
    return 0;
}