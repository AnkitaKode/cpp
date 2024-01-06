#include <iostream>
using namespace std;

void printSizedArray(int arr[3], int n)
{
    cout << "Sized Array Argument: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printUnsizedArray(int arr[], int n)
{
    cout << "Unsized Array Argument: ";
    for (int i = 0; i < n; i++)
    {

        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void printPointerArray(int *ptr, int n)
{
    cout << "Pointer Array Argument: ";

    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
}

int main()
{
    int arr[] = {11, 22, 33};
    printSizedArray(arr, 3);
    printUnsizedArray(arr, 3);
    printPointerArray(arr, 3);

    return 0;
}