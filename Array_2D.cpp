#include <iostream>
using namespace std;

int main()
{
    int arr[4][3];

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}