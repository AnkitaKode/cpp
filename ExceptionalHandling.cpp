#include <iostream>
#include <stdexcept>

using namespace std;
int main()
{
    int a = 10, b = 0;
    int c;

    try
    {
        if (b == 0)

            throw runtime_error("divide by zero error ");

        c = a / b;
        cout << c << endl;
    }

    catch (runtime_error &error)
    {
        cout << "exception occured" << endl;
        cout << error.what();
    }

    return 0;
}


/*without
#include <stdexcept>
int main()
{
    int a = 10, b = 0;
    int c;

    try
    {
        if (b == 0)

            throw "divide by zero error ";

        c = a / b;
        cout << c << endl;
    }

    catch (const char *e)
    {
        cout << "exception occured" << endl
             << e;
    }

    return 0;
}
*/