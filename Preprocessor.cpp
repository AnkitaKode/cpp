#include <iostream>
#define WELCOME "Hello Everyone, Welcome to Preprocessor page."
#define ONE 1
#define TWO ONE + ONE
#define THREE TWO + ONE
using namespace std;
int main()
{

    cout << WELCOME << endl;
    cout << TWO << endl;
    cout << THREE << endl;

    return 0;
}