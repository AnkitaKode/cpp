#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("annie.txt", ios ::in | ios::out | ios::trunc);
    
    if (!file.is_open())
    {
        cout << "error while opening the file";
    }
    else
    {
        cout << "file opened succesfully";

        file.close();
    }
    return 0;
}