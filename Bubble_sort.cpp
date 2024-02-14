#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int temp;

    int arr[8] = {12, 3, 56, 76, 8, 1, 44, 75};
    cout << "Unsorted array: \n";

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // For  Bubble Sorting
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: \n";

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}