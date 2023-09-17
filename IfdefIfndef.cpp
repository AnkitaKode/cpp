#include <iostream>
#define ANKI 1
using namespace std;

int main()
{
// #ifndef ANKI
#ifdef ANKI
    cout << "hey reader";
#else
    cout << "How are you?";
#endif

    return 0;
}