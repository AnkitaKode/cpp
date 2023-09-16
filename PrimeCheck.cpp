#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter number to check its Prime or Composite : ";
    cin >> number;

    for (int a = 1; a <= number; a++)
        if (number % a == 0)
            count++;

    if (count == 2)
        cout << "Its Prime Number \n";

    if (count == 1)

        cout << "1 is neither prime nor composite";

    else if (count <= 0)

        cout << "Number should be greater than 1";

    else if (count >= 3)

        cout << "Its Composite Number\n";

    else

        cout << "CHECKED";

    return 0;
}