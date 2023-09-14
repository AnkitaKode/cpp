#include <iostream>
using namespace std;

#include "file_one.cpp"
#include "file_two.cpp"
int main()
{
    // using namespace std;
    // display();
    one ::display();
    two ::display();

    return 0;
}