#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        try
        {
            throw "a character exception ";
        }
        catch (const char *e)
        {
            cout << "character type in inner block --> " << e << endl;
            cout << "rethrowing the exception" << endl;
            throw runtime_error("without");
        }
    }

    catch (const char *e)
    {
        cout << "character type in outer block -->" << e << endl;
    }
    catch (...)
    {
        cout << "unexcepted exception in outer block -->" << endl;
    }
    return 0;
}