#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream file("annie.txt", ios::in | ios::out | ios::app);
    if (!file.is_open())
    {
        cout << "error while opening the file";
    }
    else
    {
        cout << "file opened sucessfully" << endl;
        cout << "writing to the file" << endl;

        file << "Hello Guyzz!" << endl;

        file.seekg(0);
        cout << "reading from the file" << endl;

        string line;
        while (file.good())
        {
            getline(file, line);
            cout << line << endl;
        }
    }

    return 0;
}