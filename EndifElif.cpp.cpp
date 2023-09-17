#include <iostream>
#define WINDOWS 1
#define LINUX 2
#define MAC 3

#define OS WINDOWS
// if endif elif else ifdef ifndef undef
using namespace std;
int main()
{
#if OS == WINDOWS
    cout << "U are using windows" << endl;
#elif OS == MAC
    cout << "mac user" << endl;
#else
    cout << "linux user" << endl;
#endif
    cout << "Hahahahaah";
    return 0;
}