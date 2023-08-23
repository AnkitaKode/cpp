#include <iostream>
using namespace std;

int input;

int main()
{
    int *pointer = NULL;
    cout << "How many items u wanna enter " << endl;
    int intput;
    cin >> input;

    pointer = new int[input];

    int temp;

    for (int counter = 0; counter < input; counter++)
    {
        cout << "Enter the item " << counter + 1 << endl;
        cin >> temp;
        *(pointer + counter) = temp;
    }
    cout << "The items you have entered are " << endl;
    for (int counter = 0; counter < input; counter++)
    {
        cout << counter + 1 << " items is " << *(pointer + counter) << endl;
    }

    return 0;
}