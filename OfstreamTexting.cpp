#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("annie.txt");

    if (!file.is_open())
    {
        cout << "error while opening the file";
    }
    else
    {
        file << "Hi! I am Ankita" << endl;
        file << "and I am awesome..." << endl;
        file.close();
        cout << "succesfully written to a file , You can check it now" << endl;
    }
    return 0;
}