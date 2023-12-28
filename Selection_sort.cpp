#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int temp;
    int num;
    int p;
    int min;
    int arr[10];
    cout << "Enter the elements : ";
    cin >> num;
    cout << "\nEnter the elements : \n";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num - 1; i++)
    {
        min = arr[i];
        p = i;
        for (j = i + 1; j < num; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                p = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
    }

    cout << "Sorted array: \n";

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}