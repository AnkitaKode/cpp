#include <iostream>
using namespace std;

namespace one
{
    int i;
    // namespace two{
    //     int j;
    // }
}
namespace two
{
    int j;
}
int main()
{

    one::i = 10;
    two::j = 20;
    using namespace one;
    using namespace two;
    cout << i << " and " << j << endl;
    return 0;
}