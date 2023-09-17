#include <iostream>
using namespace std;
namespace appversion
{
    namespace version1
    {
        void display()
        {
            cout << "display from version 1" << endl;
        }
    }

    namespace version2
    {
        void display()
        {
            cout << "display from version 2" << endl;
        }
    }
    inline namespace version3
    {
        void display()
        {
            cout << "display from version 3" << endl;
        }
    }
    namespace version3
    {
        void show()
        {
            cout << "display from version 3" << endl;
        }
    }
}
int main()
{
    appversion ::display();
    appversion::show();
    appversion ::version2::display();
    
    return 0;
}