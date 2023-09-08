#include <iostream>
using namespace std;
int main()
{

    cout << "Hello World!" << endl;

    // String methods:
    string data("The earth");

    cout << data << endl;

    data.append(" revolves");
    cout << data << endl;

    cout << data.size() << endl;

    data.insert(0, "The ");
    cout << data << endl;

    cout << data.substr(7) << endl;

    data.erase(1, 4);
    cout << data << endl;

    string bud;
    getline(cin, bud);
    cout << bud;

    return 0;
}
